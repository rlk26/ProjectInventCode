int motorPin = 3;

void setup()
{
  pinMode(motorPin, OUTPUT);
}

void loop()
{
  //digitalWrite(motorPin, HIGH); //vibrate
  analogWrite(motorPin, 255);
  delay(1000);  // delay one second
  //digitalWrite(motorPin, LOW);  //stop vibrating
  analogWrite(motorPin, 0);
  delay(1000); //wait one second.
}
