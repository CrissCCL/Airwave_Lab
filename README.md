# 🔭 Bluetooth / BLE & RF Research Toolkit

> ⚠️ **Important:** This repository is strictly for **educational, analysis, and defensive research**.  
> It **does NOT** contain instructions or tools to jam, block, or interfere with radio communications.  
> Active interference (jamming, blocking) is illegal in many jurisdictions. Always obtain written authorization for any active tests and restrict them to isolated, shielded testbeds.

## 📖 Overview
This project — developed using **nRF24L01** modules and **ESP32** boards — gathers documentation and safe experiments for learning about Bluetooth/BLE and RF signaling in a legal, ethical way. The emphasis is on passive monitoring, not packet analysis, rather on protocol learning, and building controlled lab exercises for students and researchers.

Goals:
- Understand BLE and RF packet structures and behaviors.
- Perform **passive** captures and logging using ESP32 and nRF24L01 hardware in permitted environments.
- Create reproducible lab exercises to teach secure pairing, privacy addresses, and interference mitigation.
- Provide safe, legal guidance for setting up an isolated test environment.

> ⚠️ This repository will never provide instructions to build or operate jammers or active interference devices.

## 📂 Contents
- `/Hardware` →  schematic, Gerbers for ESP32 + nRF24L01.
- `/code_jmm` → C code for ESP32 (Arduino environment) and firmware file.

## 📊 Project Status
| Component                  | Status                      |
|---------------------------|-----------------------------|
| ESP32 passive scanner examples   | ✅ Completed               |
| nRF24L01 observation examples    | ✅ Completed             |
| Device assembly and electronic testing   | ✅ Completed               |
| Legal & ethics write-up   | ✅ Completed                |
| Spectrum captures         | ✅ Completed               |
| Measurement photos        | ✅ Completed            |
| Active interference research     | 🚫 Not included (forbidden)|

## ⚙️ System Description
- **Controller:** ESP32  
- **Transceiver Module:** nRF24L01+ (PA/LNA version)  
- **Function:** Generates controlled interference patterns for BLE and Bluetooth channels  
- **Operating Bands:** 2.400–2.4835 GHz (ISM band)  
- **BLE Channels:** {2, 26, 80}  
- **Bluetooth Channels:** {32, 34, 46, 48, 50, 52, 0, 1, 2, 4, 6, 8, 22, 24, 26, 28, 30, 74, 76, 78, 80}  
- **Measurement:** Tested with Anritsu MS2760A-0070 Spectrum Analyzer at Airwave Lab  


## 🧰 Hardware & Tools (recommended for passive analysis)
- **ESP32** development boards — used for BLE scanning and passive logging.
- **nRF24L01** modules — for hobby RF monitoring in permitted contexts (note: nRF24 uses its own non-Bluetooth RF stack).
- Shielded enclosure / Faraday box for any active experiments.

## 🔬 Measurement methodology (high-level)
- Measurements were taken using a calibrated **spectrum analyzer** and suitable antennas.  
- Experiments were performed in a controlled environment (shielded enclosure / isolated lab) and with the appropriate authorizations.  
- Captures include frequency averaged power spectral density (PSD).  
- **No** step-by-step instructions, hardware schematics, or firmware relating to emitters or jammers are included.

### 📸 Setup photos laboratory

<table>
  <tr>
    <td align="center">
      <img src="https://github.com/user-attachments/assets/08dab7e5-e3ec-4ad5-a1d3-6ec8e3d59a3d" alt="Anritsu MS2760A-0070 Spectrum Analyzer" width="400"><br>
      <sub>Anritsu MS2760A-0070</sub>
    </td>
    <td align="center">
      <img src="https://github.com/user-attachments/assets/9247ecb3-2b35-41bf-82a6-cfff6816b741" alt="Anechoic Chamber" width="300"><br>
      <sub>Anechoic chamber</sub>
    </td>
  </tr>
</table>

### 🔌 Power-off / Setup Overview

<p align="center">
  <img src="https://github.com/user-attachments/assets/f38b5f37-0c6c-472c-971d-fdd79a0d2d0d" alt="Power off environment" width="500"><br>
  <sub>Power-off device noise floor spectrum measurement</sub>
</p>

### 📈 Measurement Overview — BLE & Bluetooth

The spectrum analyzer tests documented below capture the emissions produced by the device in the **2.4 GHz ISM band (2.400 – 2.4835 GHz)**.  
During each test mode, the device performed a **frequency sweep across BLE and Bluetooth channels** to evaluate spectral behavior and signal distortions.

- **BLE (Bluetooth Low Energy)**: 40 channels, **2 MHz spacing**, from **2402 MHz to 2480 MHz**.  
- **Bluetooth Classic (BR/EDR)**: 79 channels, **1 MHz spacing**, from **2402 MHz to 2480 MHz**.

> ⚠️ Note: The device operation is shown for academic and educational purposes only. No instructions or parameters are provided to operate or reproduce emissions. All tests were conducted in a controlled laboratory environment with proper authorization.


### 📸 Measurement Photos — BLE

<table>
  <tr>
    <td align="center">
      <img src="https://github.com/user-attachments/assets/8d226d7f-d5cc-49dd-bc52-bf257d7e1407" alt="BLE mode A" width="400"><br>
      <sub>BLE — Capture 1</sub>
    </td>
    <td align="center">
      <img src="https://github.com/user-attachments/assets/87c63245-0af6-496e-b0b8-6cd0be098b1b" alt="BLE mode B" width="400"><br>
      <sub>BLE — Capture 2</sub>
    </td>
  </tr>
  <tr>
    <td align="center">
      <img src="https://github.com/user-attachments/assets/bef0688f-d69b-4e12-b0d4-959b81a1dc16" alt="BLE mode C" width="400"><br>
      <sub>BLE — Capture 3</sub>
    </td>
    <td></td>
  </tr>
</table>


### 📸 Measurement Photos — Bluetooth

<table>
  <tr>
    <td align="center">
      <img src="https://github.com/user-attachments/assets/0df60489-881a-4dda-a4cd-5a8fac942447" alt="Bluetooth mode A" width="400"><br>
      <sub>Bluetooth — Capture 1</sub>
    </td>
    <td align="center">
      <img src="https://github.com/user-attachments/assets/78dd05c2-8957-4b73-b746-4ca5677b0649" alt="Bluetooth mode B" width="400"><br>
      <sub>Bluetooth — Capture 2</sub>
    </td>
  </tr>
  <tr>
    <td align="center">
      <img src="https://github.com/user-attachments/assets/8566d683-0033-46d6-b7b1-c0df29081118" alt="Bluetooth mode C" width="400"><br>
      <sub>Bluetooth — Capture 3</sub>
    </td>
    <td></td>
  </tr>
</table>



### 📈 Measurement Results (Summary)

- **Instrument:** Anritsu MS2760A-0070 spectrum analyzer.  
- **Captured data:** spectrum analyzer traces highlighting distortion in BLE/Bluetooth bands during device operation.  
- **Observed effects:** spectral broadening, spurious components and harmonics consistent with strong in-band emissions. These effects were recorded for documentation and analysis purposes only.  
- **Test modes:** the device was evaluated under several modes; during each mode the device performed sweeps across channels to observe frequency-dependent behavior. *(Operational parameters and control signals are intentionally omitted from this repository.)*  
- **Purpose:** these measurements inform detection/mitigation strategies and support responsible research into electromagnetic compatibility and spectrum monitoring.

> ⚠️ Note: Raw operation logs or parameter sets that would enable reproduction of emissions are excluded from this repository.

### 🙏 Acknowledgments

Special thanks to the **[Laboratorio de Comunicaciones Inalámbricas — EIE PUCV](https://eie.pucv.cl/investigacion/lineas-de-investigacion-y-laboratorios/laboratorio-de-comunicaciones-inalambricas/)**  
for providing access to facilities, the **Anechoic Chamber**, and the **Anritsu MS2760A-0070 Spectrum Analyzer** used in these experiments.

## 🖼️ 3D PCB Render (version 3)

<table>
  <tr>
    <td align="center">
      <img src="https://github.com/user-attachments/assets/a8dbfca7-4e9b-4ead-8408-812fff7cf259" alt="PCB front render" width="400"><br>
      <sub>PCB render — front (v3)</sub>
    </td>
    <td align="center">
      <img src="https://github.com/user-attachments/assets/7e078ce6-e31c-410b-9d88-132d22fa675e" alt="PCB back render" width="400"><br>
      <sub>PCB render — back (v3)</sub>
    </td>
  </tr>
</table>

## ⚡ Physical Prototype

<table>
  <tr>
    <td align="center">
      <img src="https://github.com/user-attachments/assets/0baaee0a-8cf5-40c9-8886-d1c06d25aa3e" alt="Device front photo" width="400"><br>
      <sub>Device — front</sub>
    </td>
    <td align="center">
      <img src="https://github.com/user-attachments/assets/d4c5e40b-33ca-4922-8738-9a4619dcfe0b" alt="Device back photo" width="400"><br>
      <sub>Device — back</sub>
    </td>
  </tr>
</table>


## ⚖️ Legal & Ethical Guidelines
- Do not capture or analyze traffic from third-party devices without explicit permission.  
- Passive monitoring may still be subject to local laws — check your national telecom regulations.  
- Keep careful logs of tests, dates, and authorizations.  
- Perform any active tests only inside a shielded enclosure and with written consent.

# ⚖️ Legal & Regulatory References

This project is intended strictly for **educational purposes**.  
Operating or building radio interference devices without authorization is **illegal** in most jurisdictions.  
Below are links to relevant regulatory frameworks:

---

## 🇨🇱 Chile
- [Ley N° 18.168 — Ley General de Telecomunicaciones (BCN)](https://www.bcn.cl/leychile/navegar?idNorma=29582)  
- [Subsecretaría de Telecomunicaciones (SUBTEL) — Normas y Leyes](https://www.subtel.gob.cl/normas-y-leyes/)

---

## 🇺🇸 United States
- [47 CFR Part 15 — Radio Frequency Devices (eCFR)](https://www.ecfr.gov/current/title-47/chapter-I/subchapter-A/part-15)  
- [FCC — Rules & Regulations Overview](https://www.fcc.gov/rules-regulations)

---

## 🇪🇺 European Union
- [Directive (EU) 2018/1972 — European Electronic Communications Code (EECC)](https://eur-lex.europa.eu/legal-content/EN/TXT/?uri=CELEX%3A32018L1972)  
- [Directive 2014/53/EU — Radio Equipment Directive (RED)](https://eur-lex.europa.eu/legal-content/EN/TXT/?uri=CELEX%3A32014L0053)

---

## 🔒 Disclaimer
These references are provided for **informational purposes only**.  
- Always verify the current applicable law in your jurisdiction.  
- Obtain explicit **written authorization** before performing any active test involving RF emissions.  
- Limit all experiments to **controlled, shielded laboratory environments**.

## 🤝 Support projects
 Support me on Patreon [https://www.patreon.com/c/CrissCCL](https://www.patreon.com/c/CrissCCL)

## 📜 License
MIT License
