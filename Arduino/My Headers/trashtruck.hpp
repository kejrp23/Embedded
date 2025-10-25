#include "devices.h"

// Devices
device tailLeft(4);
device tailRight(5);
device buzzer(6);
device hornButton(7, 7); // pin + datapin same (since it's an input)

// State flag
bool hornPressed = false;

void setup() {
  pinMode(tailLeft.pin, OUTPUT);
  pinMode(tailRight.pin, OUTPUT);
  pinMode(buzzer.pin, OUTPUT);
  pinMode(hornButton.datapin, INPUT_PULLUP);
}

void loop() {
  int pressed = hornButton.read() == LOW;

  if (pressed && !hornPressed) {
    hornPressed = true;
    honkHonk();
  } 
  else if (!pressed && hornPressed) {
    hornPressed = false;
  }
}

void honkHonk() {
  // Tail lights ON
  tailLeft.on();
  tailRight.on();

  // First honk
  tone(buzzer.pin, 440, 250);
  delay(300);

  // Pause
  noTone(buzzer.pin);
  delay(100);

  // Second honk (lower tone)
  tone(buzzer.pin, 370, 350);
  delay(400);
  noTone(buzzer.pin);

  // Blink taillights twice
  for (int i = 0; i < 2; i++) {
    tailLeft.off();
    tailRight.off();
    delay(150);
    tailLeft.on();
    tailRight.on();
    delay(150);
  }

  // Lights off after honk
  tailLeft.off();
  tailRight.off();
}