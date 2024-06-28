#include<stdio.h>
main()
{
	int a;

	printf("0から100までの整数？");
	scanf("%d", &a);

	if (a >= 90) {
		printf("その数値の判定結果は「５」です\n");
	}
	else {
		if (a >= 80 && a <= 89) {
			printf("その数値の判定結果は「４」です\n");
		}
		else {
			if (a >= 50 && a <= 79) {
				printf("その数値の判定結果は「３」です\n");
			}
			else {
				if (a >= 30 && a <= 49) {
					printf("その数値の判定結果は「２」です\n");
				}
				else {
					printf("その数値の判定結果は「１」です\n");
				}
			}
		}
	}
}