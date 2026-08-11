#include <stdio.h>

int main(void)
{

	double x;

	printf("Enter a value for x: ");
	scanf("%lf", &x);

	//float result = 3 * ( x * x * x * x * x ) + 2 * ( x * x * x * x ) - 5 * ( x * x * x ) - ( x * x ) + 7 * x - 6;
	double result = (((( 3 * x + 2 ) * x - 5) * x - 1) * x + 7 ) * x - 6;  

	printf("result: %.0lf\n", result);
	return 0;
}
