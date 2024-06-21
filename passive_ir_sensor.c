/*
    Project name : ESP8266 PIR Passive Infrared Motion Sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-pir-passive-infrared-motion-sensor
*/

const int pirSensorPin = D2; // Digital pin connected to the PIR motion sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(pirSensorPin, INPUT); // Set PIR sensor pin as INPUT
}

void loop() {
  // Read PIR sensor state
  int motionDetected = digitalRead(pirSensorPin);

  // Print motion detection status to Serial Monitor
  if (motionDetected == HIGH) {
    Serial.println("Motion detected!");
  } else {
    Serial.println("No motion detected");
  }

  delay(1000); // Delay to avoid spamming Serial Monitor
}
