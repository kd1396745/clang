#include<stdio.h>
main()
{
	int a, b;
	int *p_a, *p_b, *p_w;

	a = 100;
	b = 200;

	p_a = &a; //aのアドレスを求める
	p_b = &b; //bのアドレスを求める

	printf("実行前:*p_a=%d\t *p_b=%d\n", *p_a, *p_b);
	printf("アドレス:p_a=%d\tp_b=%d\n\n", p_a, p_b);

	//ポインタ変数が記憶しているアドレスを入れ替える
	p_w = p_a;
	p_a = p_b;
	p_b = p_w;

	printf("実行後:*p_a=%d\t *p_b=%d\n", *p_a, *p_b);
	printf("アドレス:p_a=%d\tp_b=%d\n", p_a, p_b);
}