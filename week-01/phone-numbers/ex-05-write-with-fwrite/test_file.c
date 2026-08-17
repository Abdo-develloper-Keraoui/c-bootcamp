#include <stdio.h>
#include <stdlib.h>

int main(void) 
{


	char my_string[100 * 12];
	int pos = 0;

	pos += snprintf(my_string + pos, sizeof(my_string) - pos, "%s\n", "Hello World");
	for(int i = 0; i < 100; i++)
	{
		pos += snprintf(my_string + pos, sizeof(my_string) - pos, "06%08d\n", i);
	}
	printf("%s\n", my_string);
	return 0;
}
