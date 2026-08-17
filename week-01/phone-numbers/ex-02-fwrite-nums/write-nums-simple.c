#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	FILE* file_ptr = fopen("test-file.txt", "w");

	if(file_ptr == NULL)
	{
		printf("Can\'t open file!!\n");
		return -1;
	}
	int i;

	for(i = 0; i <= 9; i++) {
		fprintf(file_ptr, "%d\n", i);
	}
	fclose(file_ptr);

	return 0;
}
