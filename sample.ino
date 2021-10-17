#include "thingProperties.h"

#define ECHO_PIN (6)
#define TRIG_PIN (7)

void setup() {
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
  // This delay gives the chance to wait for a Serial Monitor without blocking if none is found
  delay(1500); 

  // init Ultrasonic sensor
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  // Defined in thingProperties.h
  initProperties();

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  
  //make ultrasonic sensor value
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  long duration = pulseIn(ECHO_PIN, HIGH);
  // set property sensornum[cm] 
  sensornum = duration * 0.034 / 2;
  
}

void onLedoutChange()  {
  // set property ledout
  ledout?digitalWrite(13, HIGH):digitalWrite(13, LOW);
}
void onSensornumChange()  {
  // Do nothing
}
