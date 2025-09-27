# 🔭 Bluetooth / BLE & RF Research Toolkit

> ⚠️ **Important:** This repository is strictly for **educational, analysis, and defensive research**.  
> It **does NOT** contain instructions or tools to jam, block, or interfere with radio communications.  
> Active interference (jamming, blocking) is illegal in many jurisdictions. Always obtain written authorization for any active tests and restrict them to isolated, shielded testbeds.

---

## 📖 Overview
This project — developed using **nRF24L01** modules and **ESP32** boards — gathers documentation, experiments, and safe examples for learning about Bluetooth/BLE and RF signaling in a legal, ethical way. The emphasis is on passive monitoring, packet analysis, protocol learning, and building controlled lab exercises for students and researchers.

Goals:
- Understand BLE and RF packet structures and behaviors.
- Perform **passive** captures and logging using ESP32 and nRF24L01 hardware in permitted environments.
- Create reproducible lab exercises to teach secure pairing, privacy addresses, and interference mitigation.
- Provide safe, legal guidance for setting up an isolated test environment.

> ⚠️ This repository will never provide instructions to build or operate jammers or active interference devices.

---

## 📂 Contents
- `/Hardware` → schematics, wiring notes, BOM for ESP32 + nRF24L01 test rigs.
- `/firmware` → example ESP32 firmware for passive scanning & logging (no transmit/jamming code).
- `/docs` → research notes, references, photos.

## 🧰 Hardware & Tools (recommended for passive analysis)
- **ESP32** development boards — used for BLE scanning and passive logging.
- **nRF24L01** modules — for hobby RF monitoring in permitted contexts (note: nRF24 uses its own non-Bluetooth RF stack).
- Shielded enclosure / Faraday box for any active experiments.

## 🔬 Measurement methodology (high-level)
- Measurements were taken using a calibrated **spectrum analyzer** and suitable antennas.  
- Experiments were performed in a controlled environment (shielded enclosure / isolated lab) and with the appropriate authorizations.  
- Captures include frequency vs. power over time (spectrograms) and averaged power spectral density (PSD).  
- **No** step-by-step instructions, hardware schematics, or firmware relating to emitters or jammers are included.

---

## 📈 Results (examples / placeholders)
### Key metrics computed:
- Center frequency bands observed
- Peak power (dBm) measured at the analyzer input
- Occupancy ratio (fraction of time the band exceeded threshold)
- Spectral width and harmonics analysis
- Time-domain burst characteristics (duration, repetition rate)

*(Insert measured plots from `/data` — spectrograms, PSD plots, and a short caption for each fig.)*

<p align="center">
<img src="docs/figures/spectrogram_example.png" alt="Spectrogram example" width="600">
</p>

---

## 🛡️ Discussion & Mitigation
- Summary of how the observed emissions impact typical services in the affected bands (Bluetooth, Wi-Fi, etc.), based on passive measurements and literature.
- Recommended mitigations for network operators and device designers:
  - Robust channel-hopping and error correction techniques.
  - Spectrum monitoring and anomaly detection (passive sniffers + centralized logging).
  - Physical protections (shielding) and procedural controls (redundant comms, emergency overrides).
- Note: recommendations are defensive and do not include offensive or disruptive techniques.

---
## ⚖️ Legal & Ethical Guidelines
- Do not capture or analyze traffic from third-party devices without explicit permission.  
- Passive monitoring may still be subject to local laws — check your national telecom regulations.  
- Keep careful logs of tests, dates, and authorizations.  
- Perform any active tests only inside a shielded enclosure and with written consent.

## 🔄 Example Diagrams
<p align="center">
<img src="docs/diagrams/passive_setup.png" alt="Passive capture setup" width="600">
</p>

<p align="center">
<img src="docs/diagrams/lab_faraday.png" alt="Lab Faraday setup" width="600">
</p>

## 📜 License
MIT License

---

## 👋 Contributing
Contributions are welcome if they **improve documentation, add safe passive-analysis examples, or strengthen legal/ethical guidance**. PRs that enable interference, jamming, or otherwise harmful actions will be rejected.

