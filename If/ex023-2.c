#include<stdio.h>
main()
{
	int a;

	printf("�������́F");
	scanf("%d", &a);

	if (a % 400 == 0) {
		printf("���邤�N�ł�\n");
	}
	else {
		if (a % 4 == 0) {
			if (a % 100 == 0) {
				printf("���邤�N�ł͂���܂���\n");
			}
			else {
				printf("���邤�N�ł͂���܂���\n");
			}
		}
		else {
			printf("���邤�N�ł͂���܂���\n");
		}
	}
}