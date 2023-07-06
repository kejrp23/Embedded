//Plant Monitor application for Arduino Uno R4 Wifi

//Created by Jason R. Pittman
//Date: 07/05/2023



const int DRY {0};
const int WET {1};
const int ON {1};
const int OFF {0};

const int soilpin {};
const int pumppin {};
const int emptylight {};
const int lowlight {};
const int fulllight {};
//couldn't one light be used here as and RGB light instead of 3?

int soil_status;
int pump_status = 0;
int light_status;

void setup(){

	pinMode(pumpin, OUTPUT);
	pinMode(soilpin, INPUT_PUllUP);
	pinMode (emptylight, OUTPUT);
	pinMode(lowlight, OUTPUT);
	pinMode(fulllight,OUTPUT); 

} 

void loop(){

	int soil_response = digitalread(soilpin);
	if (soil_response == 0/*temp usage of 0*/ && pump_status = OFF ){
		   	digitalWrite(pumppin, HIGH);
		pump_status = 1;
				
	}
//need to track light status, and update it with the change of the pump going on and off for water level. 

//light on or off will be digital 1 or 0 hot or not; if combined into one light will that make a difference? if so how can that be tracked?



		
}

