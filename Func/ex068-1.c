#include<stdio.h>
main()
{
	int a,b,cnt;

	printf("����2���́�");
	cnt = scanf("%d%d", &a, &b);

	if (cnt == EOF) {
		printf("EOF\n");
	}
	else {
		printf("%d����\n", cnt);
	}
}