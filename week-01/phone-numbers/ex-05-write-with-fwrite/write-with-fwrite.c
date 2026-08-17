#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
Objectif: generate the first 100 numbers from 06-00-00-00-00 to 06-00-00-00-09
using a chunked fwrite! 
first build a large character array that would hold 100 lines (each line exactly 11 butes: 2 for prefix (06) + (8 numbers) + one newline(\n) = 11 bytes;

we would create and fill the character array with snprintf(more memory) with an offset;

Hints:

char chunk[100 * 11]; (or a bit larger for safety).

Use a variable pos to track the current position in the array.

Each iteration: pos += sprintf(chunk + pos, "06%08d\n", i);

After the loop, write with fwrite(chunk, 1, pos, fp);

Check that the file has exactly 1100 bytes (wc -c).

*/

int main(void) {

	FILE* fptr = fopen("phone-numbers.txt", "w");

	if( fptr == NULL )
	{
		printf("File is inaccessible\n");
		return -1;
	}

	char chunk[200 * 11 + 100];

	int pos = 0;
	int i;

	for(i = 0; i <= 200; i++) {
		pos += snprintf(chunk + pos, sizeof(chunk) - pos, "06%08d\n", i);
	}

	size_t size_of_chunk = strlen(chunk);

	size_t written_chars = fwrite(chunk, sizeof(char), size_of_chunk, fptr);
	
	if( size_of_chunk != written_chars )
	{	
		printf("Only %zu of %zu elements was written\n", written_chars, size_of_chunk);
		return -1;
	} else 
	{
		printf("Successfully written the chunk to file\n");	
	}

	fclose(fptr);
	
	return 0;
}
