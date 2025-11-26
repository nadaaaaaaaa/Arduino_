int ir=10;
int cont=0;
int lastState = HIGH;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ir,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int state =digitalRead(ir);
  if(state==LOW && lastState == HIGH){
    
    cont++;
    Serial.print("object detected count");
    Serial.println(cont);
  }
  if (state == HIGH) {
    Serial.println("No object");
  }

  lastState = state;
  delay(200);
}
