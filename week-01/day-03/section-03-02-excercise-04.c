#include <stdio.h> 


/*
10.3 5 6
this is the number being read
then x = 10 it being a integer it would stop at the ".", then the float x would read .3, and stop at the " ", then the other integer would read the 5 and stop at the space, the 6 would be discarded  */
int main(void)
{
	int i,j; float x;
	scanf("%d%f%d", &i, &x, &j);
	printf("%d\t%f\t%d\n", i, x, j);
}
