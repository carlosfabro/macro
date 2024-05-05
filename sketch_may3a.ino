#include <Keyboard.h>

char enter = KEY_KP_ENTER;
char ctrl = KEY_LEFT_CTRL;
char shift = KEY_LEFT_ALT;

void setup(){
  pinMode(2, INPUT_PULLUP);
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  Keyboard.begin();
}

void loop(){
  if (digitalRead(2) == HIGH) {
    Keyboard.print("aparentemente tudo funfando")
    delay(1000);
  }

  if (digitalRead(0) == HIGH){  // copy
    Keyboard.press(ctrl);
    Keyboard.press('c');
    delay(100);
    Keyboard.releaseAll();
    delay(3000);
  }

  if (digitalRead(1) == HIGH) {  // paste
    Keyboard.press(ctrl);
    Keyboard.press('c');
    delay(100);
    Keyboard.releaseAll();
    delay(3000);
  }

  if (digitalRead(3) == HIGH){
    Keyboard.press(ctrl);
    Keyboard.press(shift);
    Keyboard.press('m');
    delay(100);
    Keyboard.releaseAll();
    delay(3000);
  }

  if (digitalRead(4) == HIGH){
    Keyboard.press(ctrl);
    Keyboard.press(shift);
    Keyboard.press('e');
    delay(100);
    Keyboard.releaseAll();;
    delay(8000);
    Keyboard.print("https://www.office.com/?flight=unauthrefresh&auth=1");
    delay(100);
    Keyboard.press(enter);
    delay(3000);
  }
  
  if (digitalRead(5) == HIGH){
    Keyboard.press(ctrl);
    Keyboard.press(shift);
    Keyboard.press('e');
    delay(100);
    Keyboard.releaseAll();
    delay(8000);
    Keyboard.print("https://ava.univesp.br/");
    delay(100);
    Keyboard.press(enter);
    delay(3000);
  }

  if (digitalRead(6) == HIGH){
    Keyboard.press(ctrl);
    Keyboard.press('s');
    delay(100);
    Keyboard.releaseAll();
    delay(3000);
  }

  if (digitalRead(7) == HIGH){
    Keyboard.press(ctrl);
    Keyboard.press('z');
    delay(100);
    Keyboard.releaseAll();
    delay(3000);
  }

  if (digitalRead(8) == HIGH){
    Keyboard.press(ctrl);
    Keyboard.press('a');
    delay(100);
    Keyboard.releaseAll();
    delay(3000);
  }

  if (digitalRead(9) == HIGH){
    Keyboard.print("carlosefsantos@outlook.com");
    delay(3000);
  }
}