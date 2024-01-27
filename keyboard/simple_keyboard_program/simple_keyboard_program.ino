#include <Keyboard.h>

void setup() {
  // put your setup code here, to run once:
  delay(2000);
  Keyboard.begin();
  Keyboard.println("Look, I'm flying!");
  Keyboard.end();
}

void loop() {
  // put your main code here, to run repeatedly:

}
