#include<stdio.h>
char moji(char c);

main()
{
	char a;
	int no;

	printf("アルファベット1文字？");
	scanf("%c", &a);
	no = moji(a);
	printf("戻り値は、");

	if (no == 1) {
		printf("%dなので入力した文字は、大文字です\n",no);
	}
	if (no == 0) {
		printf("%dなので入力した文字は、小文字です\n",no);
	}
}
char moji(char a)
{
	if (moji >= 0x41 && moji <= 0x5A) {
		return(1);
	}
	else if (moji >= 0x61 && moji <= 0x7A) {
		return(0);
	}
}