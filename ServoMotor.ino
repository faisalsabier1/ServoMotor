#include <Servo.h> //Including servo library 
Servo servo1; //Creating copy from the library for 5 servo motors
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
int min = 480; // setting the min and max value to make sure that the servo motor reach to the desired angle
int max = 2500;
int potpin = 0; // varible for the values of the resistors pin 0
int val; //varible for 

void setup()
{
  servo1.attach(7,min,max); //seting the values for the adruino  
  servo2.attach(6,min,max);
  servo3.attach(5,min,max);
  servo4.attach(4,min,max);
  servo5.attach(3,min,max);
}
void loop()
{
  val = analogRead(potpin); //read the value from the varible resistor (scaling)           
  val = map(val, 0, 1023, 0, 90); // this part is setting the resistor value and the maximum angle for the variable resistor (0-90 degrees)
  
  servo1.write(val); // sending the values to each servo 
  servo2.write(val);
  servo3.write(val);
  servo4.write(val);
  servo5.write(val);
  delay(2000); } //delay after each movment 
  
