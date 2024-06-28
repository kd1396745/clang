#include<stdio.h>
main()
{
	int i,j;
	char a=0;

	for (j = 0; j < 10;j++) {

		for (i = 32; i != 126; i++) {

			printf("%x %c  ", (int)a,a);
			a++;
		}
		printf("\n");
	}
}