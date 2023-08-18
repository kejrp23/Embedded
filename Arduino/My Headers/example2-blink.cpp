


#include "devices.h"

device led(3); 
device button(2);
int last_status = 0;



void setup(){
		pinMode(led.pin,OUTPUT);
		pinMode(button.pin,INPUT_PULLUP);
		Serial.begin(9600);
};


//simple led blink

void loop(){
		led.on();
		delay(1000);
		led.off();
		delay(1000);
};
