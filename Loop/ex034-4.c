#include<stdio.h>
main()
{
	int i, j, num;

	i = 0;
	j = 0;

	printf("���́H");
	scanf("%d", &num);
	
	do {
		i = 0;
		do {//�󔒗p
			printf(" ");
			i++;
		} while (i < num - j);

		i = 0;
		do {//*�p
			printf("*");
			i++;
		} while (i < j + 1);
		printf("\n");
		j++;
	} while (j < num);
}