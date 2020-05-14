#include <stdio.h>
#include <math.h>

int main()

{
	  float theta1 = 90;
	  float pi = 3.1415;
	  int i;
	  float t=0;
	  for (i=0; i<=318; i++){
	  	float del=500;
		float t = t+del/1000;
		float t_rad = (pi/180)*(t);
		float E = theta1 + 90*sin(t_rad);
		printf("E = %f	saat t: %.1f\n", E, t);
		}
		return(0);
		}	
