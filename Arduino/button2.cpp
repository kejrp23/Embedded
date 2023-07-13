// C++ code
// Turn on/off 3 pins
const int buttonpin {2};
int ledpin[3] = {12,13,11};
int ledstate = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(buttonpin, INPUT_PULLUP);
  for (int pin : ledpin){
    	pinMode(pin, OUTPUT);
  }
  
}

void loop(){
  //Serial.println(digitalRead(buttonpin));
  int buttonstate = digitalRead(buttonpin);
  
  if (ledstate == 1 && buttonstate == 0){
    for (int pin : ledpin){
   		digitalWrite(pin,LOW);
    }
    Serial.println("Off");
    ledstate = 0;
    delay(500);
  }
  else if (ledstate == 0 && buttonstate == 0){
    for (int pin : ledpin){
      digitalWrite(pin, HIGH);
    }
   ledstate = 1;
   Serial.println("ON");
    delay(500);
   
  };
  
}

