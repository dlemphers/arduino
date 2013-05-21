#include <Servo.h>

Servo servo_motor;

int potentiometer = 0;
int val;

void setup()
{
  servo_motor.attach(9);
}

void loop()
{
  val = analogRead(potentiometer);
  val = map(val, 0, 1023, 0, 179);
  servo_motor.write(val);
  delay(15);
}