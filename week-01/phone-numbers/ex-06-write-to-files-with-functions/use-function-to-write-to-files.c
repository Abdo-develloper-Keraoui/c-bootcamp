#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/**

Task:
Write a function void generate_file(const char *prefix, const char *filename, int count) that writes count numbers to filename, using the prefix (e.g., "05"), with suffixes from 0 to count-1 zero‑padded to 8 digits. Use fprintf for simplicity. In main, call this function three times with prefixes "05", "06", "07" and count = 1000 (just for testing). Verify each file has 1000 lines.

Hints:

Remember to open/close the file inside the function.

Use fprintf(fp, "%s%08d\n", prefix, i);

Print the number of lines written after each call (track with a counter).

Expected outcome:
Three files, each with 1000 lines, first line 05 00000000, last line 05 00000999, etc.


*/

void generate_file(const char *file_name, const char *prefix, int count) {

	FILE* fptr = fopen(file_name, "w");

	if( fptr == NULL )
	{
		printf("Unable to open file %s\n", file_name);
		return;
	}

	int i;

	for(i = 0; i <= count; i++) {
		fprintf(fptr, "%s%08d\n", prefix, i);
	}

	fclose(fptr);
	return;
}

int main(void) 
{	
	generate_file("phones_05.txt", "05", 10000);
	generate_file("phones_06.txt", "06", 10000);
	generate_file("phones_07.txt", "07", 10000);
	
	return 0;
}
