#include <Keyboard.h>
#include <KeyboardLayout.h>
#include <Keyboard_da_DK.h>
#include <Keyboard_de_DE.h>
#include <Keyboard_es_ES.h>
#include <Keyboard_fr_FR.h>
#include <Keyboard_hu_HU.h>
#include <Keyboard_it_IT.h>
#include <Keyboard_pt_PT.h>
#include <Keyboard_sv_SE.h>

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
// initialize previous button states as LOW
int prevButtonState_left = 0;
int prevButtonState_right = 0;
int prevButtonState_up = 0;
int prevButtonState_down = 0;
// action keys
char left;
char right;
char up;
char down;

void setup() {
  // put your setup code here, to run once:
  // initialize control over keyboard
  Keyboard.begin();
  left = 	KEY_LEFT_ARROW;
  right = 	KEY_RIGHT_ARROW;
  up = 	KEY_UP_ARROW;
  down = 	KEY_DOWN_ARROW;
}

void loop() {
  // put your main code here, to run repeatedly:
  // read the state of the pushbutton value:
  buttonState_left = digitalRead(buttonPin_left);
  buttonState_right = digitalRead(buttonPin_right);
  buttonState_up = digitalRead(buttonPin_up);
  buttonState_down = digitalRead(buttonPin_down);
  // press keys associated with respective buttons
  if (prevButtonState_left==LOW) {
    Keyboard.press(left);
    Keyboard.releaseAll();
  }
  if (prevButtonState_right==LOW) {
    Keyboard.press(right);
    Keyboard.releaseAll();
  }
  if (prevButtonState_up==LOW) {
    Keyboard.press(up);
    Keyboard.releaseAll();
  }
  if (prevButtonState_down==LOW) {
    Keyboard.press(down);
    Keyboard.releaseAll();
  }
  prevButtonState_left = buttonState_left;
  prevButtonState_right = buttonState_right;
  prevButtonState_up = buttonState_up;
  prevButtonState_down = buttonState_down;
  // Keyboard.end()
}