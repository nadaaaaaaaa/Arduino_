int pot=A0;
int LED1 = 3;
int LED2 = 5;
int LED3 = 6;
int POT_read;
int LED_;

void setup() {
  // put your setup code here, to run once:
  pinMode(pot,INPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  POT_read = analogRead(pot);
  LED_ =map(POT_read,0,1023,0,255);
  if(POT_read >= 0 && POT_read <= 85){
    analogWrite(LED1,POT_read);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
  }
  else if(POT_read >= 86 && POT_read <= 171){
    analogWrite(LED2,POT_read);
    digitalWrite(LED1,LOW);
    digitalWrite(LED3,LOW);
  }
  else if(POT_read >= 172 && POT_read <= 255){
    analogWrite(LED3,POT_read);
    digitalWrite(LED2,LOW);
    digitalWrite(LED1,LOW);
    
  }
  Serial.println(LED_);
}
      