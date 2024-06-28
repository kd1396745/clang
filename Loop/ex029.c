#include<stdio.h>
main()
{
	int  su, cnt;
	printf("数を入れて:");
	scanf("%d", &su);

	cnt = 0;
	while (cnt < su) {
		printf("＊");
		cnt++; //カウントアップ
	}
}