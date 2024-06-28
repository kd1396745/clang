#include<stdio.h>
main()
{
	int a = 1,i,j;

	i = 0;
	do {
		j = 0;
		do {
			printf("%2d ",a);
			a++;
			j++;
		} while (j < 10);
		printf("\n");
		i++;
	} while (i < 2);
}