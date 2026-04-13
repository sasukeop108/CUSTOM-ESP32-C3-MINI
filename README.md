# CUSTOM-ESP32-C3-MINI
This is an ESP32 development board made using the ESP32-C3-MINI Chip. It has features like lipo battery charging and programming through computer. This looks simple but i had spent approximately 8 hour to make this dev board myself. It hs tp4056 ic inbuilt for charging and esd diodes for protection. The battery could be even charged while programming the devboard because there are diodes to prevent backflow of the current. This was fully developed by me with the help of kicad.
# BOM

| Designator | Value | Footprint | MPN | Manufacturer | Package | Description | Category | LCSC Part | Type | Qty | Total Price ($) |
|------------|--------|------------|------|---------------|----------|--------------|------------|-------------|--------|------|----------------|
| 1K1 | 1k | 0402 | 0402WGF1001TCE | UNI-ROYAL | 0402 | 1kΩ Resistor ±1% | Resistor | C11702 | Basic | 8 | 0.0056 |
| R11 | 1k | 0402 | 0402WGF1001TCE | UNI-ROYAL | 0402 | 1kΩ Resistor ±1% | Resistor | C11702 | Basic | 8 | 0.0056 |
| R12,R14 | 1k | 0402 | 0402WGF1001TCE | UNI-ROYAL | 0402 | 1kΩ Resistor ±1% | Resistor | C11702 | Basic | 8 | 0.0056 |
| C1,C2,C3,C4 | 47uF | 0805 | CL21A476MQYNNNE | Samsung | 0805 | 47uF Capacitor | Capacitor | C16780 | Basic | 8 | 0.304 |
| C5,C6 | 0.1uF | 0402 | CL05B104KO5NNNC | Samsung | 0402 | 100nF Capacitor | Capacitor | C1525 | Basic | 8 | 0.0104 |
| C10,C9 | 100nF | 0402 | CL05B104KO5NNNC | Samsung | 0402 | 100nF Capacitor | Capacitor | C1525 | Basic | 8 | 0.0104 |
| C7,C8 | 12pF | 0402 | 0402CG120J500NT | Fenghua | 0402 | 12pF Capacitor | Capacitor | C1547 | Basic | 4 | 0.0048 |
| C11,C12 | 10uF | 0805 | GRM21BR61H106KE43L | Murata | 0805 | 10uF Capacitor | Capacitor | C440198 | Basic | 4 | 0.2888 |
| D1 | TVS | DFN1006 | ESD5311N-2/TR | WILLSEMI | DFN1006 | ESD Protection | Protection | C153721 | Extended | 20 | 0.452 |
| D2,D3,D4 | LED | 0603 | XL-1608BGWC-06 | XINGLIGHT | 0603 | Blue LED | LED | C965809 | Extended | 20 | 0.254 |
| D5,D6 | Schottky | SOD-323 | 1N5819WS | Hottech | SOD-323 | Schottky Diode | Diode | C191023 | Basic | 4 | 0.044 |
| J1 | USB-C | SMD | TYPE-C-31-M-12 | Hroparts | SMD | USB Type-C Connector | Connector | C165948 | Extended | 2 | 0.366 |
| J2 | Battery JST | 2mm | PH2.0-2P-LT | CAX | SMD | JST Connector | Connector | C722761 | Extended | 4 | 0.1636 |
| R1,R2 | 5.1k | 0402 | 0402WGF5101TCE | UNI-ROYAL | 0402 | 5.1kΩ Resistor | Resistor | C25905 | Basic | 4 | 0.0032 |
| R3 | 0Ω | 0805 | CR0805F80000G | LIZ Elec | 0805 | Jumper Resistor | Resistor | C101402 | Extended | 20 | 0.038 |
| R4 | 10M | 0402 | 0402WGJ0106TCE | UNI-ROYAL | 0402 | 10MΩ Resistor | Resistor | C26086 | Extended | 20 | 0.012 |
| R5 | 100k | 0402 | 0402WGF1003TCE | UNI-ROYAL | 0402 | 100kΩ Resistor | Resistor | C25741 | Basic | 2 | 0.0016 |
| R6,R7,R8,R9 | 10k | 0402 | 0402WGF1002TCE | UNI-ROYAL | 0402 | 10kΩ Resistor | Resistor | C25744 | Basic | 8 | 0.0096 |
| SW1,SW2 | Push Switch | SMD | GT-TC029A | G-Switch | 4x3mm | Tactile Switch | Switch | C778164 | Extended | 6 | 0.5958 |
| U1 | ESP32-C3 | Module | ESP32-C3-WROOM-02 | Espressif | SMD | WiFi + BLE Module | MCU | C2944070 | Extended | 2 | 6.7656 |
| U2 | USBLC6 | SOT-23-6 | USBLC6-2SC6 | TECH PUBLIC | SOT-23-6 | ESD Protection | Protection | C2827654 | Extended | 6 | 0.2436 |
| U3 | 3.3V LDO | SOT-23-5 | AP2112K-3.3 | TECH PUBLIC | SOT-23-5 | Voltage Regulator | Power | C23380830 | Extended | 5 | 0.532 |
| U4 | TP4056 | ESOP-8 | TP4056-42 | TOPPOWER | ESOP-8 | Li-ion Charger | Power | C16581 | Extended | 2 | 0.3692 |
| Y1 | 32.768kHz | SMD | Q13FC13500004 | Epson | SMD3215 | Crystal Oscillator | Crystal | C32346 | Basic | 2 | 0.3554 |

# PCB
<img width="3507" height="2480" alt="image" src="https://github.com/user-attachments/assets/45000aeb-d882-406f-a00c-eea6fea97a5c" />
<img width="325" height="372" alt="ESP32PCB" src="https://github.com/user-attachments/assets/b04892b8-71cf-4838-a2e2-fa9936712df8" />
<img width="1068" height="727" alt="safetydevice" src="https://github.com/user-attachments/assets/1a2f3fa6-2e1b-443d-9e62-3eee44272479" />
# CART
<img width="1411" height="674" alt="image" src="https://github.com/user-attachments/assets/84d47c46-5f36-436e-b6bc-cdca640d6dde" />
<img width="619" height="349" alt="image" src="https://github.com/user-attachments/assets/ac4e314b-f625-4653-a61c-2da6ecf8181b" />
<img width="796" height="483" alt="JLCSHIP" src="https://github.com/user-attachments/assets/eae16fbf-f4fa-4be4-9a49-b94eb7e66e18" />
