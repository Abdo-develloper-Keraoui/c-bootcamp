#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	FILE* fptr = fopen("prefix_numbers.txt", "w");

	if( fptr == NULL ) {
		printf("Impossible to open the specified file\n");
		return -1;
	} 

	int i;
	char buffer[20];

	for(i = 0; i <= 9; i++) 
	{
		sprintf(buffer, "06%08d", i);
		fprintf(fptr, "%s\n", buffer);
	}

	fclose(fptr);
	return 0;
}
