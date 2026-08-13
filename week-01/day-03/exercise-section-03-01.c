#include <stdio.h>

/** Outputs of these programs: 
(a) printf("%6d,%4d", 86, 1040);
    86,1040
    86,1040
(b) printf("%12.5e", 30.253);
 3.02530e+01           
(c) printf("%.4f", 83.162);
83.1620

(d) printf("%-6.2g", .0000009979);

*/
int main() {

	//	int  = 100;
	//printf("--%14d--\n", );
	//printf("%6d,%4d\n", 86, 1040);
	//printf("%12.5e\n", 30.253);
	//printf("%.4f\n", 83.162);
	printf("--%-6.2g--\n", .0000009979);
	
	printf("%-6.2e\n", .0000009979);
	printf("%lf\n", .0000009979);
	
	return 0;
}
