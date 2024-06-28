#include<stdio.h>
main()
{
	int gokei,su,i;
	gokei = 0;
	i = 0;
	printf("®”(-999‚ÅI—¹)?");
	scanf("%d", &su);

	while (su != -999) {
		gokei += su;
		printf("®”(-999‚ÅI—¹)?");
		scanf("%d", &su);
		i++;
	}
	printf("‡Œv=%d\n", gokei);
	printf("•½‹Ï=%.2f\n", (float)gokei/i);
}