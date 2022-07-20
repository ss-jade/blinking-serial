/*
 * 
 * Example code for ESP32-S:
 * The code blinks the onboard LED (at D2 in GPIO 02) every 0.500 seconds.
 * The code also prints by serial communcation the word "Hello" during the 
 * ON stage of the LED, and then prints "World" during the OFF. 
 * Gerardo Marx 19/Jul/2022
 */

// this variable is defined in pins_arduino.h for DOIT ESP32 DEVKIT V1
// int LED_BUILTIN = 02; 
int LED_ONBOARD = 02;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  //serial  monitor setup
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("ON");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  // after delay
  Serial.print(" - OFF\n");
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}
