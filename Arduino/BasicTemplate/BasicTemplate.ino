#include "Arduino_LED_Matrix.h"
#include "devices.h"
//#include "RTC.h"

device led(3);

ArduinoLEDMatrix matrix;

int count {0};
const int buttonpin {8};
int ledpin {};

const uint32_t happy[] = {
    0x19819,
    0x80000001,
    0x81f8000
};
const uint32_t heart[] = {
    0x3184a444,
    0x44042081,
    0x100a0040
};

  
void setup() {
  Serial.begin(115200);
  matrix.begin();
  // RTC.begin();
  // RTCTime startTime(10, Month::AUGUST, 2023, 17, 54, 00, DayOfWeek::MONDAY, SaveLight::SAVING_TIME_ACTIVE);
  // RTC.setTime(startTime);
  pinMode(led.pin, OUTPUT);
  
}

void loop(){
  matrix.loadFrame(happy);
  delay(3000);
  matrix.loadFrame(heart);
  delay(3000);
  led.on();
  delay(1000);
  led.off();
  delay(1000);




  // RTCTime currentTime;

  // // Get current time from RTC
  // RTC.getTime(currentTime);

  // // Print out date (DD/MM//YYYY)
  // Serial.print(Month2int(currentTime.getMonth()));
  // Serial.print("/");
  // Serial.print(currentTime.getDayOfMonth());
  // Serial.print("/");
  // Serial.print(currentTime.getYear());
  // Serial.print(" - ");

  // // Print time (HH/MM/SS)
  // Serial.print(currentTime.getHour());
  // Serial.print(":");
  // Serial.print(currentTime.getMinutes());
  // Serial.print(":");
  // Serial.println(currentTime.getSeconds());
  // digitalWrite(LED_BUILTIN, HIGH);
  // delay(1000);
  // digitalWrite(LED_BUILTIN, LOW);

  



  
}