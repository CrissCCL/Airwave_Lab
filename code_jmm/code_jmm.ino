#include "RF24.h"
#include <SPI.h>
#include <ezButton.h>
#include <driver/ledc.h>
#include "esp_bt.h"
#include "esp_wifi.h"

constexpr int BUTTON_PIN = 34;
constexpr int RED_PIN = 16;
constexpr int GREEN_PIN = 4;
constexpr int BLUE_PIN = 2;
constexpr int SPI_SPEED = 16000000;

SPIClass *spiVSPI = nullptr;
SPIClass *spiHSPI = nullptr;
RF24 radioVSPI(15, 5, SPI_SPEED);
RF24 radioHSPI(22, 21, SPI_SPEED);

int bluetooth_channels[] = {32, 34, 46, 48, 50, 52, 0, 1, 2, 4, 6, 8, 22, 24, 26, 28, 30, 74, 76, 78, 80};
int ble_channels[] = {2, 26, 80};

int currentMode = 0;

ezButton modeButton(BUTTON_PIN);
void configureRadio(RF24 &radio, int channel, SPIClass *spi);
void handleModeChange();
void executeMode();
void updateLED();
void jamBLE();
void jamBluetooth();
void jamAll();

void setup() {
    Serial.begin(115200);
    
    esp_bt_controller_deinit();
    esp_wifi_stop();
    esp_wifi_deinit();
    esp_wifi_disconnect();
    
    modeButton.setDebounceTime(100);
    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);
    updateLED(); // Inicializa el LED
    spiVSPI = new SPIClass(VSPI);
    spiVSPI->begin();
    configureRadio(radioVSPI, ble_channels[0], spiVSPI);
    
    spiHSPI = new SPIClass(HSPI);
    spiHSPI->begin();
    configureRadio(radioHSPI, bluetooth_channels[0], spiHSPI);
}

void configureRadio(RF24 &radio, int channel, SPIClass *spi) {
    if (radio.begin(spi)) {
        radio.setAutoAck(false);
        radio.stopListening();
        radio.setRetries(0, 0);
        radio.setPALevel(RF24_PA_MAX, true);
        radio.setDataRate(RF24_2MBPS);
        radio.setCRCLength(RF24_CRC_DISABLED);
        radio.startConstCarrier(RF24_PA_HIGH, channel);
    }
}

void loop() {

    modeButton.loop();
    if (modeButton.isPressed()) {
        handleModeChange();
    }
    executeMode();
}

void handleModeChange() {
    currentMode = (currentMode + 1) % 4;
    Serial.print("Mode changed to: ");
    Serial.println(currentMode);
    updateLED();
}

void executeMode() {
    switch (currentMode) {
        case 0:
            delay(100);
            break;
        case 1:
            jamBLE();
            break;
        case 2:
            jamBluetooth();
            break;
        case 3:
            jamAll();
            break;
    }
}

void jamBLE() {
    int randomIndex = random(0, sizeof(ble_channels) / sizeof(ble_channels[0]));
    int channel = ble_channels[randomIndex];
    radioVSPI.setChannel(channel);
    radioHSPI.setChannel(channel);
}

void jamBluetooth() {
    int randomIndex = random(0, sizeof(bluetooth_channels) / sizeof(bluetooth_channels[0]));
    int channel = bluetooth_channels[randomIndex];
    radioVSPI.setChannel(channel);
    radioHSPI.setChannel(channel);
}

void jamAll() {
    if (random(0, 2)) {
        jamBluetooth();        
    } else {
        jamBLE();
    }
    //delayMicroseconds(20);
}
void updateLED() {
  switch (currentMode) {
    case 0: // Apagado
      digitalWrite(RED_PIN, LOW);
      digitalWrite(GREEN_PIN, LOW);
      digitalWrite(BLUE_PIN, LOW);
      break;
    case 1: // Azul
      digitalWrite(RED_PIN, LOW);
      digitalWrite(GREEN_PIN, LOW);
      digitalWrite(BLUE_PIN, HIGH);
      break;
    case 2: // Verde
      digitalWrite(RED_PIN, LOW);
      digitalWrite(GREEN_PIN, HIGH);
      digitalWrite(BLUE_PIN, LOW);
      break;
    case 3: // Rojo
      digitalWrite(RED_PIN, HIGH);
      digitalWrite(GREEN_PIN, LOW);
      digitalWrite(BLUE_PIN, LOW);
      break;
  }
}

