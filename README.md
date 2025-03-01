# TouchSensor
# Touch Sensor LED Control with ESP32

This project demonstrates how to use a **touch sensor** to control an **LED** with an ESP32. When the touch sensor is pressed, the LED turns **ON**; otherwise, it remains **OFF**. The system also prints the LED status on the **Serial Monitor**.

## Features
- Uses a **touch sensor** to toggle an **LED**.
- Displays **LED status** on the **Serial Monitor**.
- Simple and efficient **digitalRead()** based implementation.

## Components Used
- **ESP32**
- **Touch Sensor** (connected to GPIO 5)
- **LED** (connected to GPIO 33)

## Circuit Connections
| Component | ESP32 Pin |
|-----------|-----------|
| LED | GPIO 33 |
| Touch Sensor | GPIO 5 |

## Installation & Setup
### 1. Upload the Code
1. Open the **Arduino IDE**.
2. Copy and paste the provided code.
3. Connect the ESP32 and upload the sketch.

### 2. Open Serial Monitor
- Set baud rate to **115200**.
- Observe touch sensor interactions and LED status.

## How It Works
1. When the **touch sensor** is pressed, ESP32 detects a **HIGH** signal and turns the **LED ON**.
2. When the sensor is **released**, ESP32 detects a **LOW** signal and turns the **LED OFF**.
3. The **Serial Monitor** displays the LED status.

## Example Output
```
Led On
Led On
Led On
```

## Future Enhancements
- Implement **capacitive touch sensing** for more precision.
- Add **multiple sensors** for advanced applications.
- Create a **wireless control system** with Bluetooth or WiFi.

## License
This project is open-source under the MIT License.

