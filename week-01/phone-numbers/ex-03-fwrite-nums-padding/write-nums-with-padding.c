#include <stdio.h>
#include <stdlib.h>

int main(void) 
{

	FILE* file_ptr = fopen("test_file.txt", "w");

	if ( file_ptr == NULL) 
	{
		printf("Cannot open/write to file\n");
		return -1;
	}

	char buffer[20];

	int i;
	for(i = 0; i <= 9; i++) {

		sprintf(buffer, "%08d", i);
		fprintf(file_ptr,"%s\n", buffer);
	}
	fclose(file_ptr);

	return 0;
}
