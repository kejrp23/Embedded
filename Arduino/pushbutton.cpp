// C++ code
//
const int buttonpin {2};
const int ledpin {12};
int ledstate = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(buttonpin, INPUT_PULLUP);
  pinMode(ledpin, OUTPUT);
  
}

void loop(){
  //Serial.println(digitalRead(buttonpin));
  int buttonstate = digitalRead(buttonpin);
  
  if (ledstate == 1 && buttonstate == 0){
   	digitalWrite(ledpin,LOW);
    Serial.println("Off");
    ledstate = 0;
    delay(500);
  }
  else if (ledstate == 0 && buttonstate == 0){
   digitalWrite(ledpin, HIGH);
   ledstate = 1;
   Serial.println("ON");
    delay(500);
   
  };
  
}


