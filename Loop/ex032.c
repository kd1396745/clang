#include<stdio.h>
main()
{
	int i, num;

	printf("��������:");
	scanf("%d", &num);

	for (i = 1; i <= 5; i++) {
		printf("%d ", num * i);
	}
}