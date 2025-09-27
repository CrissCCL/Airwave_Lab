# 🔭 Bluetooth / BLE & RF Research Toolkit

> ⚠️ **Important:** This repository is strictly for **educational, analysis, and defensive research**.  
> It **does NOT** contain instructions or tools to jam, block, or interfere with radio communications.  
> Active interference (jamming, blocking) is illegal in many jurisdictions. Always obtain written authorization for any active tests and restrict them to isolated, shielded testbeds.

## 📖 Overview
This project — developed using **nRF24L01** modules and **ESP32** boards — gathers documentation, experiments, and safe examples for learning about Bluetooth/BLE and RF signaling in a legal, ethical way. The emphasis is on passive monitoring, not packet analysis, rather on protocol learning, and building controlled lab exercises for students and researchers.

Goals:
- Understand BLE and RF packet structures and behaviors.
- Perform **passive** captures and logging using ESP32 and nRF24L01 hardware in permitted environments.
- Create reproducible lab exercises to teach secure pairing, privacy addresses, and interference mitigation.
- Provide safe, legal guidance for setting up an isolated test environment.

> ⚠️ This repository will never provide instructions to build or operate jammers or active interference devices.

## 📂 Contents
- `/Hardware` → schematics, wiring notes, BOM for ESP32 + nRF24L01 test rigs.
- `/firmware` → example ESP32 firmware for passive scanning & logging (no transmit/jamming code).
- `/docs` → research notes, references, photos.

## 📊 Project Status
| Component                  | Status                      |
|---------------------------|-----------------------------|
| ESP32 passive scanner examples   | ✅ Completed               |
| nRF24L01 observation examples    | ✅ Completed             |
| Device assembly and electronic testing   | ✅ Completed               |
| Legal & ethics write-up   | ✅ Completed                |
| Spectrum captures         | ⚙️ In Progress                |
| Measurement photos        | ⚙️ In Progress              |
| Active interference research     | 🚫 Not included (forbidden)|



## 🧰 Hardware & Tools (recommended for passive analysis)
- **ESP32** development boards — used for BLE scanning and passive logging.
- **nRF24L01** modules — for hobby RF monitoring in permitted contexts (note: nRF24 uses its own non-Bluetooth RF stack).
- Shielded enclosure / Faraday box for any active experiments.

## 🔬 Measurement methodology (high-level)
- Measurements were taken using a calibrated **spectrum analyzer** and suitable antennas.  
- Experiments were performed in a controlled environment (shielded enclosure / isolated lab) and with the appropriate authorizations.  
- Captures include frequency vs. power over time (spectrograms) and averaged power spectral density (PSD).  
- **No** step-by-step instructions, hardware schematics, or firmware relating to emitters or jammers are included.

## 📈 Results (examples / placeholders)
### Key metrics computed:
- Center frequency bands observed
- Peak power (dBm) measured at the analyzer input
- Occupancy ratio (fraction of time the band exceeded threshold)
- Spectral width and harmonics analysis
- Time-domain burst characteristics (duration, repetition rate)


## 🖼️ 3D PCB Render version 3

<p align="center">
<img src="docs/jammerBT_v3.jpg" alt="pcb front width="300">
</p>

<p align="center">
<img src="docs/jammerBT_v3b.jpg" alt="pcb back width="300">
</p>

## 🖼️ Prototype

<p align="center">
<img src="docs/jammer1.jpg" alt="Device front" width="400">
</p>

<p align="center">
<img src="docs/jammer1b.jpg" alt="Device back" width="400">
</p>


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

## 📜 License
MIT License
