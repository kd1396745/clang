#include<stdio.h>
main()
{
	int i, j, num;

	i = 0;
	j = 0;

	printf("数は？");
	scanf("%d", &num);
	
	do {
		i = 0;
		do {//空白用
			printf(" ");
			i++;
		} while (i < num - j);

		i = 0;
		do {//*用
			printf("*");
			i++;
		} while (i < j + 1);
		printf("\n");
		j++;
	} while (j < num);
}