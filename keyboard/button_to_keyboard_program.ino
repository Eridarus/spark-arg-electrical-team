#include <Keyboard.h>

const int buttonPin_up = 14;  // the number of the pushbutton pin
int buttonState_up = 0;  // initial value for variable for reading the pushbutton status
char upKey = 	KEY_UP_ARROW; // action key

const int buttonPin_down = 14;  // the number of the pushbutton pin
int buttonState_down = 0;  // initial value for variable for reading the pushbutton status
char upKey = 	KEY_UP_ARROW; // action key

const int buttonPin_left = 14;  // the number of the pushbutton pin
int buttonState_left = 0;  // initial value for variable for reading the pushbutton status
char upKey = 	KEY_UP_ARROW; // action key

const int buttonPin_right = 14;  // the number of the pushbutton pin
int buttonState_right = 0;  // initial value for variable for reading the pushbutton status
char upKey = 	KEY_UP_ARROW; // action key

void setup() {
  // put your setup code here, to run once:
  // initialize control over keyboard
  Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);
  if (buttonState1==HIGH) {
    Keyboard.press(ctrlKey);
    Keyboard.releaseAll();
  }

  // Keyboard.end()
}