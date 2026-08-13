#include <stdio.h>
/*
Write a program that accepts a date from the user in the form mm/dd/yyyy and then displays it in the form yyyymmdd:
Enter a date (mm/dd/yyyy): 2/17/2011
You entered the date 20110217
*/

int main(void)
{
	int dd, mm, yyyy;
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);
	printf("You entered the date %.4d%.2d%.2d\n", yyyy,mm,dd);//the format is of this %-m.pX so here when we have ints, -m or m would speak of spaces trailing or leading i forget which is which, and .p would give us the zeroes, now this date format would work correctly for all dates from "1/1/1" to "12/31/9999" if humans are still alive and eating hummus 

	return 0;
}
