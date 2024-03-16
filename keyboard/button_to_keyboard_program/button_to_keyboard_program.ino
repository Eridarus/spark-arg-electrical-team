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
const int buttonPin_alt_left = 6;
const int buttonPin_alt_right = 7;
const int buttonPin_alt_up = 8;
const int buttonPin_alt_down = 9;

// initial value for variable for reading the pushbutton status
int buttonState_left = 0;
int buttonState_right = 0;
int buttonState_up = 0;
int buttonState_down = 0;
int buttonState_alt_left = 0;
int buttonState_alt_right = 0;
int buttonState_alt_up = 0;
int buttonState_alt_down = 0;
// initialize previous button states as LOW
int prevButtonState_left = 0;
int prevButtonState_right = 0;
int prevButtonState_up = 0;
int prevButtonState_down = 0;
int prevButtonState_alt_left = 0;
int prevButtonState_alt_right = 0;
int prevButtonState_alt_up = 0;
int prevButtonState_alt_down = 0;
// action keys
char left;
char right;
char up;
char down;
char alt_left;
char alt_right;
char alt_up;
char alt_down;

void setup() {
  // put your setup code here, to run once:
  // sets following pins as input pins
  pinMode(18, INPUT);
  pinMode(19, INPUT);
  pinMode(20, INPUT);
  pinMode(21, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  // initialize control over keyboard
  Keyboard.begin();
  left = 	KEY_LEFT_ARROW;
  right = 	KEY_RIGHT_ARROW;
  up = 	KEY_UP_ARROW;
  down = 	KEY_DOWN_ARROW;
  alt_left = 'a';
  alt_right = 'd';
  alt_up = 'w';
  alt_down = 's';
}

void loop() {
  // put your main code here, to run repeatedly:swadswswwwwwwwwswswswwwwww
// read the state of the pushbutton value:
  buttonState_left = digitalRead(buttonPin_left);
  buttonState_right = digitalRead(buttonPin_right);
  buttonState_up = digitalRead(buttonPin_up);
  buttonState_down = digitalRead(buttonPin_down);
  buttonState_alt_left = digitalRead(buttonPin_alt_left);
  buttonState_alt_right = digitalRead(buttonPin_alt_right);
  buttonState_alt_up = digitalRead(buttonPin_alt_up);
  buttonState_alt_down = digitalRead(buttonPin_alt_down);
  // press keys associated with respective buttons
  if (prevButtonState_left==LOW && buttonState_left==HIGH) {
    Keyboard.press(left);
    Keyboard.releaseAll();
  }
  if (prevButtonState_right==LOW && buttonState_right==HIGH) {
    Keyboard.press(right);
    Keyboard.releaseAll();
  }
  if (prevButtonState_up==LOW && buttonState_up==HIGH) {
    Keyboard.press(up);
    Keyboard.releaseAll();
  }
  if (prevButtonState_down==LOW && buttonState_down==HIGH) {
    Keyboard.press(down);
    Keyboard.releaseAll();
  }
    if (prevButtonState_alt_left==LOW && buttonState_alt_left==HIGH) {
    Keyboard.press(alt_left);
    Keyboard.releaseAll();
  }
  if (prevButtonState_alt_right==LOW && buttonState_alt_right==HIGH) {
    Keyboard.press(alt_right);
    Keyboard.releaseAll();
  }
  if (prevButtonState_alt_up==LOW && buttonState_alt_up==HIGH) {
    Keyboard.press(alt_up);
    Keyboard.releaseAll();
  }
  if (prevButtonState_alt_down==LOW && buttonState_alt_down==HIGH) {
    Keyboard.press(alt_down);
    Keyboard.releaseAll();
  }
  prevButtonState_left = buttonState_left;
  prevButtonState_right = buttonState_right;
  prevButtonState_up = buttonState_up;
  prevButtonState_down = buttonState_down;
  prevButtonState_alt_left = buttonState_alt_left;
  prevButtonState_alt_right = buttonState_alt_right;
  prevButtonState_alt_up = buttonState_alt_up;
  prevButtonState_alt_down = buttonState_alt_down;
  // Keyboard.end()
}