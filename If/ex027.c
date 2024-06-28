#include<stdio.h>
main()
{
	char a;

	printf("文字を入力：");
	scanf("%c", &a);

	if (a >= 'A' && a <= 'Z') {
		printf("変換すると%c\n", a + 0x20);
	}
	else {
		if (a >= 'a' && a <= 'z') {
			printf("変換すると%c\n", a - 0x20);
		}
		else {
			printf("エラー：アルファベットを入力してください\n");
		}
	}
}