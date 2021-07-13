#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
int min = 480;
int max = 2500;
int potpin = 0;
int val;

void setup()
{
  servo1.attach(7,min,max);
  servo2.attach(6,min,max);
  servo3.attach(5,min,max);
  servo4.attach(4,min,max);
  servo5.attach(3,min,max);
}
void loop()
{
  val = analogRead(potpin);            
  val = map(val, 0, 1023, 0, 90);
  
  servo1.write(val);
  servo2.write(val);
  servo3.write(val);
  servo4.write(val);
  servo5.write(val);
  delay(2000); }
  