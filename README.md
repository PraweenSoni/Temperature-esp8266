# Water Temperature Display using ESP8266 and DS18B20

This project uses an **ESP8266 microcontroller** and a **DS18B20 waterproof temperature probe** to measure and display water temperature. The temperature readings are displayed in the Arduino IDE Serial Monitor, making it easy to monitor real-time water temperature.

## Components Used
- **ESP8266** microcontroller NodeMCU.
- **DS18B20** waterproof temperature sensor
- **4.7kΩ resistor** (for pull-up between the data line and VCC)
- Connecting wires
- Breadboard (optional)

## Features
- Real-time water temperature measurement.
- Displays temperature in the Arduino IDE Serial Monitor.

## Wiring Diagram
Here’s how to wire the components:

| DS18B20 Pin   | ESP8266 Pin       |
|---------------|-------------------|
| VCC (Red)     | 3.3V or 5V        |
| GND (Black)   | GND               |
| Data (Yellow) | GPIO (e.g., D4)   |

> **Note:** Connect a 4.7kΩ pull-up resistor between the DS18B20's Data and VCC pins.

## Library i used
- OneWire
- DallasTemperature
