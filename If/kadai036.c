#include<stdio.h>
main()
{
	int a, b;

	printf("�����P�H");
	scanf("%d", &a);
	printf("�����Q�H");
	scanf("%d", &b);

	if (a > b) {
		printf("%d�̂ق���%d���%d�傫��\n", a, b, a - b);
	}
	else {
		if (a == b) {
			printf("%d��%d�͓�����\n", a, b);
		}
		else {
			printf("%d�̂ق���%d���%d������\n", a, b, b - a);
		}
	}
}