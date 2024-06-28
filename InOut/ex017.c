#include<stdio.h>
main()
{
	float fn1, fn2, fn3;
	printf("１つ目の実数：");
	scanf("%f", &fn1);
	printf("２つ目の実数：");
	scanf("%f", &fn2);
	printf("３つ目の実数：");
	scanf("%f", &fn3);
	printf("合計＝%.2f\n平均＝%.2f\n", fn1 + fn2 + fn3, (fn1 + fn2 + fn3)/ 3);
}