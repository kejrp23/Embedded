#include "devices.h"
#include "Arduino_LED_Matrix.h"
#include "vt.h"
#include <memory>

ArduinoLEDMatrix matrix;

device button(10);
device led(3);
device led1(LED_BUILTIN);


void setup() {
  pinMode(button.pin,INPUT_PULLUP);
  pinMode(led.pin,OUTPUT);
  pinMode(led1.pin,OUTPUT);
  Serial.begin(9600);
  matrix.loadSequence(vt);
  matrix.begin();
  matrix.play(true);

};

auto ptr1 = std::make_unique<device>(led1);

void loop() {
  //int status = digitalRead(button.pin);
  Serial.println(button.last_status);
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
