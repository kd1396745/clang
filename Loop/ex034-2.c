#include<stdio.h>
main()
{
	int su,cnt;

	printf("”‚ÍH");
	scanf("%d", &su);

	do {
		cnt = 0;
		do {
			printf("*");
			cnt++;
		} while (cnt < 5);
		printf("\n");
		su--;
	} while (su > 0);
}