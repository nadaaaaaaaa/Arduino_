
#include "Keypad.h"
const byte r=4;
const byte c=4;

char hexakeys[r][c]={
  {'1','2','3','A'},
  {'4','4','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rpins[r]={9,8,7,6};
byte cpins[c]={5,4,3,2};

Keypad customkeypad = Keypad(makeKeymap(hexakeys) , rpins , cpins , r , c);

void setup() {
  // open the serial port:
  Serial.begin(9600);
  // initialize control over the keyboard:
  //Keyboard.begin();
}

void loop() {
  // check for incoming serial data:
  char customkey = customkeypad.getKey();
  if (customkey) {
    Serial.println(customkey);  
  }
}
