#include <stdio.h>
float calcCelsius(float f);
void main()
{      	float fahr;
	printf("Celsius: %f",calcCelsius(0));
	getch();
	clrscr();
}
float calcCelsius(float fahr){
  float celsius = (5.0/9.0) * (fahr - 32.0);
  return celsius;
}