#include<stdio.h>
main()
{
	int gokei,su,i;
	gokei = 0;
	i = 0;
	printf("����(-999�ŏI��)?");
	scanf("%d", &su);

	while (su != -999) {
		gokei += su;
		printf("����(-999�ŏI��)?");
		scanf("%d", &su);
		i++;
	}
	printf("���v=%d\n", gokei);
	printf("����=%.2f\n", (float)gokei/i);
}