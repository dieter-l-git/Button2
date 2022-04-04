/////////////////////////////////////////////////////////////////
#include "Button2.h"
/////////////////////////////////////////////////////////////////

Button2 button;

/////////////////////////////////////////////////////////////////

byte myButtonStateHandler() {
  return digitalRead(39);
}

/////////////////////////////////////////////////////////////////

void myTapHandler(Button2 &b) {
    Serial.println("tap");
}

/////////////////////////////////////////////////////////////////

void setup() {
  Serial.begin(9600);
  delay(100);
  Serial.println("\n\nCustom Buttom Test");
  button.begin(VIRTUAL_PIN);

  pinMode(39, INPUT_PULLUP);

  button.setButtonStateFunction(myButtonStateHandler);
  button.setTapHandler(myTapHandler);
}

/////////////////////////////////////////////////////////////////

void loop() {
  button.loop();
}

/////////////////////////////////////////////////////////////////