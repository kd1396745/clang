#include<stdio.h>
main()
{
	int gokei, su,i;
	gokei = 0;
	su = 1;
	i = 0;

	//su++;
	//gokei += su;

	while (gokei < 300) {
		gokei += su;
		su++;
		i++;
		gokei = su + i;
		printf("%d+", gokei);
	}
}