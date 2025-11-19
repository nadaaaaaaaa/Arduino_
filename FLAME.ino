int buzzer=4;
int flamepin=8;
void setup() {
  // put your setup code here, to run once:
  pinMode( buzzer ,OUTPUT  );
  pinMode( flamepin ,INPUT  );
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int read=digitalRead(flamepin);
  if(read==LOW){
    Serial.println("FLAME,FLAME,FLAME");
    digitalWrite(buzzer,HIGH);
  }
  else{
    Serial.println("NO FLAME");
    digitalWrite(buzzer,LOW);
  }
}
