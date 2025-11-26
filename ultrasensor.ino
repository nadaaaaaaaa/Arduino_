int led_g=6;
int led_r=7;
int led_Y=8;
int trigpin=9;
int ecopin=10;


void setup() {
  // put your setup code here, to run once:
  pinMode(trigpin,OUTPUT);
  pinMode(ecopin,INPUT);
  pinMode(led_g,OUTPUT);
  pinMode(led_r,OUTPUT);
  pinMode(led_Y,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);

  long duration =pulseIn(ecopin,HIGH);
  int distance=duration/58;

  Serial.println(distance);
  delay(500);

  if(distance<15){
    digitalWrite(led_r,HIGH);
    digitalWrite(led_g,LOW);
    digitalWrite(led_Y,LOW);

  }
  else if(distance>16&&distance<30){
    digitalWrite(led_r,LOW);
    digitalWrite(led_g,HIGH);
    digitalWrite(led_Y,LOW);

  }
  else if(distance>31&&distance<50){
    digitalWrite(led_r,LOW);
    digitalWrite(led_g,LOW);
    digitalWrite(led_Y,HIGH);
  }
}
