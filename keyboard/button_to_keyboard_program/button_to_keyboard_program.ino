#include <Keyboard.h>

// constants - the number associated with the pushbutton pin
const int buttonPin_left = 18;
const int buttonPin_right = 19;
const int buttonPin_up = 20;
const int buttonPin_down = 21;

// initial value for variable for reading the pushbutton status
int buttonState_left = 0;
int buttonState_right = 0;
int buttonState_up = 0;
int buttonState_down = 0;  

// action keys
char left = 	KEY_LEFT_ARROW;
char right = 	KEY_RIGHT_ARROW;
char up = 	KEY_UP_ARROW;
char down = 	KEY_DOWN_ARROW;

void setup() {
  // put your setup code here, to run once:
  // initialize control over keyboard
  Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  // read the state of the pushbutton value:
  buttonState_left = digitalRead(buttonPin_left);
  buttonState_right = digitalRead(buttonPin_right);
  buttonState_up = digitalRead(buttonPin_up);
  buttonState_down = digitalRead(buttonPin_down);
  // press keys associated with respective buttons
  if (buttonState_left==HIGH) {
    Keyboard.press(left);
    Keyboard.releaseAll();
  }
  if (buttonState_left==HIGH) {
    Keyboard.press(left);
    Keyboard.releaseAll();
  }
  if (buttonState_up==HIGH) {
    Keyboard.press(up);
    Keyboard.releaseAll();
  }
  if (buttonState_down==HIGH) {
    Keyboard.press(down);
    Keyboard.releaseAll();
  }

  // Keyboard.end()
}