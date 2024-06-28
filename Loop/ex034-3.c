#include<stdio.h>
main()
{
	int su,su1,num;

	su = 0;
	su1 = 0;
	printf("”‚ÍH");
	scanf("%d", &num);

	do {
		su = 0;
		do {
			printf("*");
			su++;
		} while (su < su1 +1 );
		printf("\n");
		num--;
		su1++;
	} while (num > 0);
}