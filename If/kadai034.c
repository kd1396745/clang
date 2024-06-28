#include<stdio.h>
main()
{
	char a;

	printf("1文字入力？");
	scanf("%c", &a);

	if (a >= 'A' && a <= 'Z') {
		printf("その文字は「大文字」です\n");
	}
	else {
		if (a >= 'a' && a <= 'z') {
			printf("その文字は「小文字」です\n");
		}
		else {
			printf("ERROR:アルファベットを入力してください\n");
		}
	}
}