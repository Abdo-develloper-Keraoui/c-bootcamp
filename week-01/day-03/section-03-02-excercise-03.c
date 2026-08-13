#include <stdio.h> 

/* 

(a) "%d" versus " %d" ==> same way (but this is different it hangs ["%d "])!!
(b) "%d-%d-%d" versus "%d -%d -%d" ===> reads the same way, but how?? 
	example 12-12-2002 is read the same way in both?? that space gets ignored and it consumes the "-" then it gets back to reading the ints
(c) "%f" versus "%f " ==> it will hang requiring to input another character and then enter
(d) "%f,%f" versus "%f, %f" ==> it will not hang and it will be read the same way

*/
int main(void) {
	/*
	int x1, x2, x3;

	scanf("%d-%d-%d", &x1,&x2,&x3);
	printf("%d-%d-%d\n", x1,x2,x3);
	
	printf("----break----\n");


	scanf("%d -%d -%d", &x1,&x2,&x3);
	printf("%d -%d -%d\n", x1,x2,x3);
	*/
	float f1,f2;
	scanf("%f,%f", &f1, &f2);
	printf("%f,%f\n", f1, f2);

	printf("----break----\n");
	scanf("%f, %f", &f1, &f2);
	printf("%f, %f", f1, f2);

	return 0;
}
