#include <stdio.h> 

/**
Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010
Item	Unit	Purchase
		Price	Date
583 	$ 13.50 10/24/2010
The item number and date should be left justified; the unit price should be right justified.
Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns*/
int main(void)
{
	int item_number;
	float unit_price;
	int mm,dd,yyyy;

	printf("Enter item number: ");
	scanf("%d", &item_number);
	
	printf("Enter unit price: ");
	scanf("%f", &unit_price);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tprice\t\tDate\n");
	printf("%-6d\t\t$%7.2f\t\t%.2d/%.2d/%.4d\n", item_number, unit_price, mm,dd,yyyy);
	
	return 0;
}
