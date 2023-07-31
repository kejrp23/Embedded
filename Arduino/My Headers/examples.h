/* Example file for demonstrating how to use the devices class contained within devices.h
 *
 * Created By Jason R. Pittman 07/25/2023
 */


#include "devices.h"

#define HIGH 1;
#define LOW 0;


device led(13); //creating a led object with one constructor only using the pin position;
device motor(11,10);//creating a motor object using the two-parameter constructor for pin position and an optional data pin to receive input



void setup() {
  Serial.begin(9600);

}

void loop() {
//Example using even and odd numbers to turn the motor and the led on and off using the class members.
    for (int i = 1; i < 10; ++i){
      if (i % 2 == 0){
        motor.last_status = 1; //updating the last status member
	digitalWrite(motor.pin,HIGH);//accessing the motor.pin member to access pin position and change from low to high
        Serial.println("motor status changed");
        Serial.println(motor.last_status);
        Serial.println("led status changed");
	digitalWrite(led.pin,HIGH);//accessing the led.pin member to access pin position and change from low to high
        led.last_status = 1;
        Serial.println(led.last_status);
        delay(2000);
      }
      else {
	digitalWrite(motor.pin,LOW);//changing the motor to low using the member pin  
	digitalWrite(led.pin,LOW);//changing the led to low using the member pin
        motor.last_status = 0;//updating status with last change
        led.last_status = 0;//updating status with last change
        Serial.println("Motor status changed");
        Serial.println(motor.last_status);
        Serial.println("led status changed");
        Serial.println(led.last_status);
        delay(2000);
      }
    }



