int motorPin = 2;

void setup()
{
  pinMode(motorPin, OUTPUT);
}

void loop()
{
  digitalWrite(motorPin, HIGH); //vibrate
  delay(1000);  // delay one second
  digitalWrite(motorPin, LOW);  //stop vibrating
  delay(1000); //wait 50 seconds.
}
