#include<stdio.h>
void shisoku(int x, int y, int *wa, int *sa, int *sk, int *syo);
main()
{
	int a, b, c, d, e, f;

	printf("数値？:");
	scanf("%d", &a);
	printf("数値？:");
	scanf("%d", &b);

	//関数呼び出し
	shisoku(a, b, &c, &d, &e, &f);

	puts("数値と数値の四則演算");//文字列表示
	printf("wa = %d  sa = %d  seki = %d  syou = %d", c, d, e, f);
}

//関数定義
void shisoku(int x, int y, int *wa, int *sa, int *sk, int *syo)
{
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*syo = x / y;
	return;
}