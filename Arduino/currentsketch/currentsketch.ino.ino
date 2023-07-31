#include "devices.h"
#include "Arduino_LED_Matrix.h"
#include "vt.h"

ArduinoLEDMatrix matrix;

device button(10);
device led(3);


void setup() {
  pinMode(button.pin,INPUT_PULLUP);
  pinMode(led.pin,OUTPUT);
  Serial.begin(9600);
  matrix.loadSequence(vt);
  matrix.begin();
  matrix.play(true);

};


void loop() {
  int status = digitalRead(button.pin);
  Serial.println(status);
  if (status == 0 && led.last_status ==0){
    digitalWrite(led.pin, HIGH);
    led.last_status = 1;
    delay(500);
  }
  else if (status == 0 && led.last_status == 1){
    digitalWrite(led.pin, LOW);
    led.last_status = 0;
    delay(500);
  }

};
