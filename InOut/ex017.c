#include<stdio.h>
main()
{
	float fn1, fn2, fn3;
	printf("�P�ڂ̎����F");
	scanf("%f", &fn1);
	printf("�Q�ڂ̎����F");
	scanf("%f", &fn2);
	printf("�R�ڂ̎����F");
	scanf("%f", &fn3);
	printf("���v��%.2f\n���ρ�%.2f\n", fn1 + fn2 + fn3, (fn1 + fn2 + fn3)/ 3);
}