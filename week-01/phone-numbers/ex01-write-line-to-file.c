#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	
	FILE *file_ptr = fopen("file.txt", "w");

	
	if(file_ptr == NULL) 
	{
		printf("Error opening file to write to.\n");
		return -1;
	}
	fprintf(file_ptr, "Hello Morocco\n");
	fclose(file_ptr);
	
	return 0;
}
