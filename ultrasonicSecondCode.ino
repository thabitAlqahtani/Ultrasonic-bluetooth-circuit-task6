#include <Servo.h>

Servo oneM;

void setup()
{
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  oneM.attach(5);
}

void loop()
{
  if (Serial.read() == '1') {
  digitalWrite(7, HIGH);
   oneM.write(180);
  }
  else digitalWrite(7, LOW);
}