
#include "devices.h"

device led(13);
device motor(11,10);



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {

    for (int i = 1; i < 10; ++i){
      if (i % 2 == 0){
        motor.last_status = 1;
        Serial.println("motor status changed");
        Serial.println(motor.last_status);
        Serial.println("led status changed");
        led.last_status = 1;
        Serial.println(led.last_status);
        delay(2000);
      }
      else {
        motor.last_status = 0;
        led.last_status = 0;
        Serial.println("Motor status changed");
        Serial.println(motor.last_status);
        Serial.println("led status changed");
        Serial.println(led.last_status);
        delay(2000);
      }
    }
  // put your main code here, to run repeatedly:



