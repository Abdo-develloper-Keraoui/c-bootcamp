#include <stdio.h>



/* -- Formulas
length 
width 
height
volume = length * width * height (cubic inches)
Dimensional weight: (volume + 165 ) / 166;

*/

/* -- Output
height = 8
length = 12
width = 10

Dimensions: 12x10x8
Volume (cubic inches): 960
Dimensional weight (pounds): 6
*/
int main(void) {
	int length, width, height, volume, weight;

	length = 12;
	width = 10;
	height = 8;
	volume = length * width * height;
	weight = (volume + 165) / 166;

	printf("Dimensions: %dx%dx%d\n", length,width,height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);

	return 0;
}
