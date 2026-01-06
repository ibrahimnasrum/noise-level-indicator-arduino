# Smart Noise Level Indicator (IIUM Library) — Arduino Prototype

A simple **noise-triggered LED indicator** for the **Leisure Reading Area, IIUM Library**.  
This prototype uses an **Arduino UNO** + **KY-037 (or any digital sound sensor module)** to detect loud sounds and provide a visual reminder to keep the area quiet.

## Project Background
Quiet study spaces can be affected by conversations, chair movement, phone calls, and general unawareness. This project adds **real-time visual feedback** so users can self-correct without staff intervention. :contentReference[oaicite:0]{index=0}

## What This Repo Contains
- `SmartNoiseIndicator.ino` (Arduino sketch)
- `README.md` (this file)

## How It Works (Current Code)
- The sound sensor outputs **HIGH** when noise crosses a threshold.
- When **HIGH**, the LED blinks **5 times** (warning).
- When **LOW**, the LED stays **OFF**.

> Note: The proposal also mentions using **3 LEDs** (Green/Yellow/Red) for multi-level indication. This repo starts with the **basic single-LED warning version**, and can be upgraded later. :contentReference[oaicite:1]{index=1}

---

## Hardware Needed
- Arduino UNO
- KY-037 sound sensor module (digital output)
- 1× LED + 220Ω resistor (or LED module)
- Jumper wires + breadboard
- 5V USB power supply / adapter

(Estimated budget and items are listed in the project proposal.) :contentReference[oaicite:2]{index=2}

## Wiring (Matches the Provided Code)
### KY-037 Sound Sensor
- **VCC** → 5V
- **GND** → GND
- **DO**  → **D2** (Arduino)

### LED
- **LED anode (+)** → **D3** (through 220Ω resistor)
- **LED cathode (-)** → GND

> Pins used in code:
> - `MIC_PIN = 2`
> - `LED_PIN = 3`

---

## Setup & Upload
1. Install **Arduino IDE**
2. Connect Arduino UNO to your computer via USB.
3. Open the `.ino` file.
4. Select:
   - **Tools → Board → Arduino Uno**
   - **Tools → Port → (your COM port)**
5. Click **Upload**.

## Calibration (Important)
The KY-037 has a small **potentiometer (screw adjuster)**:
- Turn it to set the threshold so the sensor triggers only when the area is “too loud”.
- Test by clapping / talking at different volumes until the behaviour is stable. :contentReference[oaicite:3]{index=3}

---

## Optional Upgrade Ideas (Next Version)
If you want to match the proposal fully:
- **Green LED** = Quiet
- **Yellow LED** = Moderate
- **Red LED** = Loud (warning)

You can implement this by reading the **analog output (AO)** of the sensor and setting 2 thresholds (quiet/moderate/loud). :contentReference[oaicite:4]{index=4}

---

## Beneficiaries / Impact
- Helps promote a calmer environment for **IIUM students and staff**
- Reduces disturbances and supports focus & comfort in shared study areas :contentReference[oaicite:5]{index=5}

## Team (Group 5)
- Ibrahim Bin Nasrum — Team Leader
- Muhammad Rafiq bin Mohd Jamal — Public Relation
- Sofiyah Binti Zamara — Technical
- Ahmad Faez Zulhakim bin Ahmad Badli — Technical :contentReference[oaicite:6]{index=6}

## Reference
- Project Proposal PDF (Smart Noise Level Indicator in Leisure Reading Area, IIUM Library) :contentReference[oaicite:7]{index=7}
