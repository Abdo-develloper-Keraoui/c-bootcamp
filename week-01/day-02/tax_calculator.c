#include <stdio.h> 

/*
	Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added:
	Enter an amount: 100.00
	With tax added: $105.00
*/

#define TAX_RATE 5
 
int main(void) 
{
	float amount, after_tax;

	printf("Enter an amount: ");
	scanf("%f", &amount);

	after_tax = amount + (amount * TAX_RATE) / 100.00f;

	printf("With tax added: $%.2f\n", after_tax);
	
	return 0;
}
