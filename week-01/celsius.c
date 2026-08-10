#include <stdio.h>

/*
Enter Fahrenheit temperature: 212
Celsius equivalent: 100.0
*/

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f) 

int main(void)
{
	int Fahrenheit;
	float Celsius;

	printf("Enter Fahrenheit temperature: ");
	scanf("%d", &Fahrenheit);

	Celsius = (Fahrenheit -  FREEZING_PT) * SCALE_FACTOR;

	printf("Celsius equivalent: %.1f\n", Celsius);

	return 0;
}
