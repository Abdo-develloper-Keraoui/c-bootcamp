#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//1 Mb plus macro so no ; in the end
#define BUFFER_SIZE 1024*1024

void generate_file(const char *filename, const char *prefix, int count) 
{
	FILE* fptr = fopen(filename, "w");
	if( fptr == NULL ) 
	{
		printf("Unable to open file %s\n", filename);
		return;
	}

	char chunk[BUFFER_SIZE];
	int i;
	int pos = 0;
	for(i = 0; i <= count; i++) {
		if(pos >= BUFFER_SIZE - 110)//be safe than sorry  
		{
			size_t actual_size_of_chunk = strlen(chunk);
			size_t actual_written_chars = fwrite(chunk, sizeof(char), actual_size_of_chunk, fptr);
			if(actual_written_chars != 	actual_size_of_chunk) 
			{
				printf("Didn't finish writing properly!!\n");
			}
			pos = 0;
			memset(chunk, 0,sizeof(chunk));
			
		}
		pos += snprintf(chunk + pos, sizeof(chunk) - pos, "%s%08d\n", prefix, i);
	}
	//save the remainder 
	size_t actual_size_of_chunk = strlen(chunk);
	size_t actual_written_chars = fwrite(chunk, sizeof(char), actual_size_of_chunk, fptr);
	if(actual_written_chars != 	actual_size_of_chunk) 
	{
		printf("Didn't finish writing properly!!\n");
	}
	fclose(fptr);
}




int main(void) 
{
	clock_t start_time, end_time;
	double cpu_time_used;

	start_time = clock();
	generate_file("phone-numbers-05.txt", "05", 99999999);
	generate_file("phone-numbers-06.txt", "06", 99999999);
	generate_file("phone-numbers-07.txt", "07", 99999999);
	end_time = clock();
	cpu_time_used = ((double) end_time - start_time ) / CLOCKS_PER_SEC;


	printf("Whilst Using this program we spent %lf seconds\n", cpu_time_used);
	return 0;
}
