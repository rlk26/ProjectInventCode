/*
    Vibration Motor with Arduino
    For more details, visit: https://techzeero.com/arduino-tutorials/vibration-motor-with-arduino/
*/

int motorPin = 3; //motor transistor is connected to pin 3

void setup()
{
   Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
  Serial.println("SARAH");
  digitalWrite(motorPin, HIGH);
}

void loop()
{
  //digitalWrite(motorPin, HIGH); //vibrate
  Serial.println("HELLO");
 
  
  Serial.println("RAMYA FIXES ALL OF SARAHS ERRORS");
}
