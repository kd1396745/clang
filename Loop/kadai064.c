#include<stdio.h>
main()
{
	int i, j, a = 20;

	j = 0;
	while (j < 2) {
		i = 0;
		while (i < 10) {
			printf("%2d ", a);
			a--;
			i++;
		}
		printf("\n");
		j++;
	}
}