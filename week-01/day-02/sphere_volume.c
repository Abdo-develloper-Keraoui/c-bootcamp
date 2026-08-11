#include <stdio.h>

#define PI 3.141592653589793f

/*
*	v = 4/3π(r^3)
*/

int main(void) {

	float s_radius = 10.0f;

	float s_volume = (4.0f/3.0f) * PI * s_radius * s_radius * s_radius;

	printf("Volume of the Sphere: %.2f m^3\n", s_volume);
	

	return 0;
}
