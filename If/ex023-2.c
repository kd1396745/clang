#include<stdio.h>
main()
{
	int a;

	printf("西暦を入力：");
	scanf("%d", &a);

	if (a % 400 == 0) {
		printf("うるう年です\n");
	}
	else {
		if (a % 4 == 0) {
			if (a % 100 == 0) {
				printf("うるう年ではありません\n");
			}
			else {
				printf("うるう年ではありません\n");
			}
		}
		else {
			printf("うるう年ではありません\n");
		}
	}
}