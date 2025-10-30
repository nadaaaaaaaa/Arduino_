
//int button1 =2; 
//int button2 =3; 
//int button3 =4; 

void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int button_state1= digitalRead(2);
  int button_state2= digitalRead(3);
  int button_state3= digitalRead(4);
  if (button_state1 == LOW) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }

  if (button_state2 == LOW) {
    digitalWrite(7, HIGH);
  } else {
    digitalWrite(7, LOW);
  }

  if (button_state3 == LOW) {
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
  }
}
