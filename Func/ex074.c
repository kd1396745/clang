#include<stdio.h>
void display1(int n1); //プロトタイプ宣言　値渡し
void display2(int* n2); //プロトタイプ宣言　アドレス渡し
main()
{
	int a, b;
	printf("数値a？ ");
	scanf("%d", &a);
	display1(a); //値渡し
	printf("a=%d\n\n", a);

	printf("数値b？ ");
	scanf("%d", &b);
	display2(&b); //アドレス渡し
	printf("b=%d\n\n", b);
}

//display1の関数定義
void display1(int n)
{
	printf("数値aは、%dです。\n", n);
	n += 10;
	return;
}

//display2の関数定義
void display2(int* n)
{
	printf("数値bは、%dです。\n", *n);
	*n += 10;
	return;
}