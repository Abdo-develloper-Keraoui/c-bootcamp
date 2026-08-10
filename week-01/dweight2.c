#include <stdio.h>



/* -- Formulas
length 
width 
height
volume = length * width * height (cubic inches)
Dimensional weight: (volume + 165 ) / 166;

*/

/* -- Output
Enter height of box: 8
Enter length of box: 12
Enter width of box: 10
Volume (cubic inches): 960
Dimensional weight (pounds): 6
*/


#define INCHES_PER_POUND 166

int main(void) {
	int length, width, height, volume, weight;


	printf("Enter length of box: ");
	scanf("%d", &length);

	printf("Enter width of box: ");
	scanf("%d", &width);
	
	printf("Enter height of box: ");
	scanf("%d", &height);

	volume = length * width * height;
	weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
	

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);

	return 0;
}
