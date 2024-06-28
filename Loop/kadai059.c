#include<stdio.h>
main()
{
	int a, b, i;

	printf("    1  2  3  4  5  6  7  8  9\n");
	printf("==============================\n");

	for (i = 0,a = 0; i != 9; i++) {
		printf("%2d|", i + 1);
		a++;
			for (b = 1; b != 10; b++) {
				printf("%2d ", a * b);
				
			}
		    
		printf("\n");
	}
}