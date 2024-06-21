# ESP8266 PIR Motion Sensor Project

#### Project Overview
This project demonstrates how to use an ESP8266 microcontroller with a PIR (Passive Infrared) motion sensor to detect motion in its vicinity. The PIR sensor identifies changes in infrared radiation, allowing it to detect movement. This can be useful for security systems, automatic lighting, and other applications that require motion detection.

#### Components Needed
- **ESP8266 Microcontroller**
- **PIR Motion Sensor**
- **Jumper Wires**

#### Circuit Setup
1. **Connecting the PIR Motion Sensor to ESP8266:**
   - Connect the digital output pin of the PIR sensor to GPIO pin D2 on the ESP8266.
   - Connect the VCC pin of the PIR sensor to the 3.3V pin on the ESP8266.
   - Connect the GND pin of the PIR sensor to the GND pin on the ESP8266.

#### Instructions
1. **Setup:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Create a new sketch and paste the provided Arduino code.
   - Connect the ESP8266 to your computer, select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Operation:**
   - After uploading the code, open the Serial Monitor (baud rate: 9600).
   - The Serial Monitor will display whether motion is detected ("Motion detected!") or not ("No motion detected").
   - Move in front of the PIR sensor to observe changes in detection status.

#### Applications
- **Security Systems:** Detect unauthorized movement in secure areas.
- **Automatic Lighting:** Turn lights on/off based on presence detection.
- **Energy Management:** Reduce energy consumption by controlling devices based on occupancy.

#### Notes
- **Sensor Sensitivity:** Adjust the sensitivity of the PIR sensor based on the distance and type of motion you want to detect.
- **Digital Output:** The PIR sensor provides a digital signal (`LOW` or `HIGH`) based on motion detection.
- **Delay:** A delay is used to avoid spamming the Serial Monitor with too many readings.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 PIR Motion Sensor](https://projectslearner.com/learn/esp8266-pir-passive-infrared-motion-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner

