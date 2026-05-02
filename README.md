# CUSTOM-ESP32-C3-MINI
This is an ESP32 development board made using the ESP32-C3-MINI Chip. It has features like lipo battery charging and programming through computer. This looks simple but i had spent approximately 13 hour to make this dev board myself. It hs tp4056 ic inbuilt for charging and esd diodes for protection. The battery could be even charged while programming the devboard because there are diodes to prevent backflow of the current. This was fully developed by me with the help of kicad.
# BOM
# JLCPCB Bill of Materials (BOM)

## Order Summary

- **BOM Name**: bom-JLCPCB Assembly Order (7)
- **PCB Assembled Qty**: 2
- **Est. Total Price**: $12.7414
- **Download Time**: 2026-05-02 21:22:55

## Component List

| Designator | Value | Footprint | Part Number | Manufacturer | Description | Category | Qty | Price |
|---|---|---|---|---|---|---|---|---|
| 1K1 | R | 0402 | 0402WGF1001TCE | UNI-ROYAL(Uniroyal Elec) | -55℃~+155℃ 1kΩ 50V 62.5mW Thick Film Resistor ±1% ±100ppm/℃ 0402 Ch... | Chip Resistor - Surface Mount | 8 | $0.008 |
| R11 | 1.2k | 0402 | 0402WGF1001TCE | UNI-ROYAL(Uniroyal Elec) | -55℃~+155℃ 1kΩ 50V 62.5mW Thick Film Resistor ±1% ±100ppm/℃ 0402 Ch... | Chip Resistor - Surface Mount | 8 | $0.008 |
| R12,R14 | 1k | 0402 | 0402WGF1001TCE | UNI-ROYAL(Uniroyal Elec) | -55℃~+155℃ 1kΩ 50V 62.5mW Thick Film Resistor ±1% ±100ppm/℃ 0402 Ch... | Chip Resistor - Surface Mount | 8 | $0.008 |
| C1,C2,C3,C4 | 47uF | 0805 | CL21A476MQYNNNE | Samsung Electro-Mechanics | 47uF 6.3V X5R ±20% 0805 Multilayer Ceramic Capacitors MLCC - SMD/SM... | Multilayer Ceramic Capacitors MLCC - SMD/SMT | 8 | $0.3048 |
| C5,C6 | 0.1uF | 0402 | CL05B104KO5NNNC | Samsung Electro-Mechanics | 100nF 16V X7R ±10% 0402 Multilayer Ceramic Capacitors MLCC - SMD/SM... | Multilayer Ceramic Capacitors MLCC - SMD/SMT | 8 | $0.0104 |
| C10,C9 | 100nF | 0402 | CL05B104KO5NNNC | Samsung Electro-Mechanics | 100nF 16V X7R ±10% 0402 Multilayer Ceramic Capacitors MLCC - SMD/SM... | Multilayer Ceramic Capacitors MLCC - SMD/SMT | 8 | $0.0104 |
| C7,C8 | 12pF | 0402 | 0402CG120J500NT | FH (Guangdong Fenghua Advanced Tech) | 12pF 50V C0G ±5% 0402 Multilayer Ceramic Capacitors MLCC - SMD/SMT ... | Multilayer Ceramic Capacitors MLCC - SMD/SMT | 4 | $0.0052 |
| C11,C12 | 10uF | 0805 | GRM21BR61H106KE43L | Murata Electronics | 10uF 50V X5R ±10% 0805 Multilayer Ceramic Capacitors MLCC - SMD/SMT... | Multilayer Ceramic Capacitors MLCC - SMD/SMT | 4 | $0.272 |
| D2,D3,D4 | LED | 0402 | 16-213/BHC-AN1P2/3T | Everlight Elec | -40℃~+85℃ 120° 20mA 3.3V 468nm 471nm 50.25mcd 95mW Blue Discrete Di... | LED Indication - Discrete | 20 | $0.572 |
| D5,D6 | D_Schottky | SOD-323 | B5819WS-TP | MCC(Micro Commercial Components) | -65℃~+125℃ 1 Independent 10A 1A 40V 40uA@40V 600mV@1A SOD-323 Schot... | Global Sourcing Parts | 8 | $0.3336 |
| D1_2,D7,D8 | D_TVS_Small | SOD-923 | LESD9D5.0CT5G | LRC | -40℃~+125℃ 150W@8/20us 15pF 18.6V 5.6V 500nA 5V 9.4A@8/20us Bidirec... | ESD And Surge Protection (TVS/ESD) | 20 | $0.452 |
| J1 | USB_C_Receptacle_USB2.0_16P | SMD | TYPE-C-31-M-12 | Korean Hroparts Elec | -30℃~+80℃ 1 10,000 cycles 16P 20V 5A 7.35mm Female Surface Mount, R... | USB Connectors | 2 | $0.3662 |
| R1,R2 | 5.1k | 0402 | 0402WGF5101TCE | UNI-ROYAL(Uniroyal Elec) | -55℃~+155℃ 5.1kΩ 50V 62.5mW Thick Film Resistor ±1% ±100ppm/℃ 0402 ... | Chip Resistor - Surface Mount | 4 | $0.0036 |
| R3 | R | 0805 | 0805W8F1001T5E | UNI-ROYAL(Uniroyal Elec) | -55℃~+155℃ 125mW 150V 1kΩ Thick Film Resistor ±1% ±100ppm/℃ 0805 Ch... | Chip Resistor - Surface Mount | 2 | $0.006 |
| R4 | 10M | 0402 | 0402WGJ0106TCE | UNI-ROYAL(Uniroyal Elec) | -55℃~+155℃ 10MΩ 50V 62.5mW Thick Film Resistor ±100ppm/℃ ±5% 0402 C... | Chip Resistor - Surface Mount | 20 | $0.012 |
| R5 | 100k | 0402 | 0402WGF1003TCE | UNI-ROYAL(Uniroyal Elec) | -55℃~+155℃ 100kΩ 50V 62.5mW Thick Film Resistor ±1% ±100ppm/℃ 0402 ... | Chip Resistor - Surface Mount | 2 | $0.0018 |
| R6,R7,R8,R9 | 10k | 0402 | 0402WGF1002TCE | UNI-ROYAL(Uniroyal Elec) | -55℃~+155℃ 10kΩ 50V 62.5mW Thick Film Resistor ±1% ±100ppm/℃ 0402 C... | Chip Resistor - Surface Mount | 8 | $0.0104 |
| SW1,SW2 | SW_Push | SMD,3.1x2.5mm | GT-TC032A-H015-L1 | G-Switch | -30℃~+85℃ 1.5mm 1.6N 100,000 cycles 12V 2.5mm 3.05mm 50mA Black No ... | Tactile Switches | 5 | $0.9455 |
| U1 | ESP32-C3-WROOM-02 | VFQFN-32-EP | ESP32-C3-WROOM-02-N4 | Espressif Systems | -105dBm -40℃~+85℃ 2.4GHz 20.5dBm 345mA 3V~3.6V 82mA Bluetooth5.0 ES... | WiFi Modules | 2 | $6.1606 |
| U3 | AP2112K-3.3 | SOT-23-5 | AP2112K-3.3TRG1 | TECH PUBLIC | -40℃~+85℃@(Ta) 1 10uA 3.3V 320mV@(600mA) 5.5V 600mA 75dB@(1kHz) Fix... | Voltage Regulators - Linear, Low Drop Out (LDO) Regulators | 5 | $0.533 |
| U4 | TP4056-42-ESOP8 | ESOP-8 | TP4056-42-ESOP8 | TOPPOWER(Nanjing Extension Microelectronics) | -40℃~+85℃ 1 1A 2uA 4.2V 4V~8V Charging IC Lithium Battery Support E... | Battery Management | 0 | $0 |
| Y1 | Crystal | SMD3215-2P | ABS07-32.768KHZ-T | Abracon LLC | -40℃~+85℃ 12.5pF 32.768kHz 70kΩ Crystal Oscillator ±20ppm SMD3215-2... | Crystals | 5 | $2.5165 |
| D1 | PESD5V0L1ULD | DFN1006-2(SOD-882) | PESD5V0L1ULD,315 | Nexperia | -55℃~+150℃ 1 10nA 12V 25pF 3.5A@8/20us 42W 5V 6.4V ESD IEC 61000-4-... | ESD And Surge Protection (TVS/ESD) | 5 | $0.2014 |
# PCB
<img width="3507" height="2480" alt="image" src="https://github.com/user-attachments/assets/5ddc2f48-a9e8-40a9-9e0e-f8e2c648112a" />
<img width="1068" height="727" alt="image" src="https://github.com/user-attachments/assets/bcd97358-4d01-4c87-86dd-4c070ae6ecc6" />
<img width="254" height="329" alt="image" src="https://github.com/user-attachments/assets/df0acaef-92c5-45de-a497-28dbd95b2c34" />

# CART
<img width="1408" height="636" alt="jlcesp32" src="https://github.com/user-attachments/assets/7c3bf5ab-15a4-4dbf-a488-43aef8db5b82" />
<img width="800" height="499" alt="Screenshot 2026-04-26 131437" src="https://github.com/user-attachments/assets/6dcbf21f-43f4-4f06-96d9-3d57af08437d" />
<img width="659" height="333" alt="Screenshot 2026-05-02 191945" src="https://github.com/user-attachments/assets/c7f337cf-d39a-4e7c-b02e-aa8d52632d57" />

