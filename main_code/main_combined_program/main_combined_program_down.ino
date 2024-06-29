#include <Keyboard.h>
const int buttonPin_alt_up = 18;


// initial value for variable for reading the pushbutton status

int buttonState_alt_up = LOW;
int prevButtonState_alt_up = LOW;

char alt_up;

void setup() {
  pinMode(buttonPin_alt_up, INPUT);
  // initialize control over keyboard
  Keyboard.begin();
  alt_up = 'w';
}

void loop() {

  buttonState_alt_up = digitalRead(buttonPin_alt_up);
  if (prevButtonState_alt_up==LOW && buttonState_alt_up==HIGH) {
    Keyboard.press(alt_up);
    Keyboard.releaseAll();
  }
  prevButtonState_alt_up = buttonState_alt_up;
}
