#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#define CHUNK_SIZE 10000

void generate_file(const char *filename, const char *prefix, int count) 
{
	FILE* fptr = fopen(filename, "w");
	if( fptr == NULL ) 
	{
		printf("Unable to open file %s\n", filename);
		return;
	}

	char chunk[CHUNK_SIZE * 2];
	int i;
	int pos = 0;
	for(i = 0; i <= count; i++) {
		if(pos > CHUNK_SIZE) 
		{
			size_t actual_size_of_chunk = strlen(chunk);
			size_t actual_written_chars = fwrite(chunk, sizeof(char), actual_size_of_chunk, fptr);

			pos = 0;
			memset(chunk, 0,sizeof(chunk));
			
		}
		pos += snprintf(chunk + pos, sizeof(chunk) - pos, "%s%08d\n", prefix, i);
	}
	//save the remainder 
	size_t actual_size_of_chunk = strlen(chunk);
	size_t actual_written_chars = fwrite(chunk, sizeof(char), actual_size_of_chunk, fptr);

	fclose(fptr);
}




int main(void) 
{
	clock_t start_time, end_time;
	double cpu_time_used;

	start_time = clock();
	generate_file("phone-nums-fwrite.txt", "06", 10000000);
	end_time = clock();
	cpu_time_used = ((double) end_time - start_time ) / CLOCKS_PER_SEC;


	printf("Whilst Using fwrite we spent %lf seconds\n", cpu_time_used);
	return 0;
}
