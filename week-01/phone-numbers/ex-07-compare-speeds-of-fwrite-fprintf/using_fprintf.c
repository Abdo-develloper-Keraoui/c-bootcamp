#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void generate_file(const char *filename, const char *prefix, int count) {

	FILE* fptr = fopen(filename, "w");

	if(fptr == NULL) 
	{
		printf("Unable to open file\n");
	}

	int i;

	for(i = 0; i <= count; i++) 
	{
		fprintf(fptr, "%s%08d\n", prefix, i);
	}

	fclose(fptr);
	return;
}


int main(void) {

	clock_t start_time, end_time;
	double cpu_time_used;

	start_time = clock(); 
	generate_file("phone-nums-fprintf.txt", "06", 10000000);
	end_time = clock();

	cpu_time_used = ((double) end_time - start_time ) / CLOCKS_PER_SEC;
	printf("Whilst Using fprintf we spent %lf seconds\n", cpu_time_used);

	return 0;
}
