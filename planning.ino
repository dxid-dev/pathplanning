#include <Servo.h>
Servo servo;

int sudutawal = 0;

void setup() {
  servo.attach(7);
  servo.write (sudutawal);
}

void loop() 
{ 
  float theta1 = 90;
  float pi = 3.1415;
  int i;
  float t=0;
  while (theta1>1)
  {
    float del=500;
    float t_rad = (pi/180)*(t);
    float E = theta1 + 90*sin(t_rad);
    t = t+del/1000;
    servo.write (E);
    delay(10);
  }
  return(0); 
}
