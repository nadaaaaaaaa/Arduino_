int LED1 = 5;
int LED2 = 7;
int LED3 = 9;
int button1 =2; 
int button2 =3; 
int button3 =4; 

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int button_state1= digitalRead(button1);
  int button_state2= digitalRead(button2);
  int button_state3= digitalRead(button3);
  if (button_state1 == LOW) {
    digitalWrite(LED1, HIGH);
  } else {
    digitalWrite(LED1, LOW);
  }

  if (button_state2 == LOW) {
    digitalWrite(LED2, HIGH);
  } else {
    digitalWrite(LED2, LOW);
  }

  if (button_state3 == LOW) {
    digitalWrite(LED3, HIGH);
  } else {
    digitalWrite(LED3, LOW);
  }
}
