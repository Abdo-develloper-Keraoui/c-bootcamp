#include <stdio.h>

/*
Write a program that prompts the user to enter a telephone number in the form (xxx) xxxxxxx and then displays the number in the form xxx.xxx.xxx:
Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
You entered 404.817.6900
*/


int main(void) 
{

	int phone_part00, phone_part01, phone_part02; 
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &phone_part00,&phone_part01,&phone_part02);

	printf("You entered %.3d.%.3d.%.4d\n",phone_part00,phone_part01,phone_part02);
}
