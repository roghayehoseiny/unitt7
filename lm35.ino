const int lm35pin = A0;

int led = 9;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}
void loop() {
  int sensorValue = analogRead(lm35pin);
  float temprature = sensorValue * 0.48818225;
  Serial.print("temprature=");
  Serial.print(temprature);
  Serial.println("*C");


  if (temprature > 27){
    Serial.print("cooler on");
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
  delay(1000);
}
