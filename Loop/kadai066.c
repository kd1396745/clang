#include<stdio.h>
main()
{
	int i = 1,gokei = 0;

	do {
		printf("%d", i);
		printf("+");
		i++;
		gokei += i;
	} while (gokei < 300);
	printf("=");
	printf("%d", gokei);
}