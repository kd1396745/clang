#include<stdio.h>
main()
{
	int su;

	printf("整数を入力:");
	scanf("%d", &su);

	if (su >= 10 && su <= 49) {

		switch (su / 10) {
		case 1:
			printf("10点台です\n");
			break;
		case 2:
			printf("20点台です\n");
			break;
		case 3:
			printf("30点台です\n");
			break;
		case 4:
			printf("40点台です\n");
		}
	}
	else {
		printf("エラー:10〜49の範囲を入力してください\n");
	}
}