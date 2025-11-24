int led=13;
char c;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  c=Serial.read();
  if(c=="1"){
    digitalWrite(led,HIGH);
  }
  else if(c=="0"){
    digitalWrite(led,LOW);

  }
}
