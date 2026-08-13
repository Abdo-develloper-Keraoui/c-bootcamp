#include <stdio.h> 


/*
12.3 45.6 789
this is the number being read
then x = 12.3 it being a float it would stop at the " ", then the int x would read 45, and stop at the ".", then the other float would read the .6 and stop at the space, the 789 would be discarded  */
int main(void)
{
	int i; float x,y;
	scanf("%f%d%f", &x, &i, &y);
	printf("%f\t%d\t%f\n", x, i, y);
}
