#include <Arduino.h>

// put function declarations here:
int inled = 13;
int outLed = 2;

void setup() {
  // put your setup code here, to run once:

pinMode(inled, OUTPUT);
  pinMode(outLed, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(inled, HIGH);
  delay(1000);
  digitalWrite(inled, LOW);
  delay(1000);
  
  digitalWrite(outLed, HIGH);
  delay(1000);
  digitalWrite(outLed, LOW);
  delay(1000);
  
}
