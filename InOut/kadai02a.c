#include<stdio.h>
main()
{
	double a, b;
	printf("2�̎����l�H");
	scanf("%lf%lf", &a, &b);

	printf("***%.1f��%.1f�̎l�����Z***\n", a, b);
	printf("�a��%f ����%f �ρ�%f ����%f", a + b, a - b, a * b, a / b);
}