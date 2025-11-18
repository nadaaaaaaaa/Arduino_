int pot=A0;
int LED1 = 3;
int LED2 = 5;
int LED3 = 6;
int POT_read;
int LED_1;
int LED_2;
int LED_3;
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
  LED_1 =map(POT_read,0,1023,0,341);
  analogWrite(LED1,LED_1);
  Serial.println(LED_1);
  LED_2 =map(POT_read,0,1023,342,683);
  analogWrite(LED2,LED_2);
  Serial.println(LED_2);
  LED_3 =map(POT_read,0,1023,684,1023);
  analogWrite(LED3,LED_3);
  Serial.println(LED_3);
}
      