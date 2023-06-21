#include <LiquidCrystal_I2C.h>

const int temp_pin {A0};
const int led_pin {8};
int temp = 0;
int fahrenheit = 0;
int celsius = 0;

LiquidCrystal_I2C lcd(0x20, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(temp_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  lcd.clear();
  temp = analogRead(A0);
  celsius = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
  fahrenheit = ((celsius * 9) / 5 + 32);
  Serial.println(fahrenheit);
  lcd.print("Temperature: ");
  lcd.setCursor(7,1);
  lcd.print(fahrenheit);
  lcd.print("F");
  if (fahrenheit > 90) {
    digitalWrite(led_pin,HIGH);
  }
  else {
    digitalWrite(led_pin,LOW);
  }
  delay(10000);
 
}

//fahrenheit = ((celsius * 9) / 5 + 32)
