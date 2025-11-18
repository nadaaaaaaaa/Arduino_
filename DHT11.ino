#include "DHT.h"

DHT dht(2,DHT11);
float temp;
float humidity;
void setup() {
  // put your setup code here, to run once:
  dht.begin();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  temp=dht.readTemperature();
  humidity=dht.readHumidity();
  Serial.print("Temperature : ");
  Serial.print(temp);
  Serial.print(" C ");
  Serial.print("humidity : ");
  Serial.print(humidity);
  Serial.println(" %");
}
