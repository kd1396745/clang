#include<stdio.h>
main()
{
	int a = 100, b = 10;
	int* p = &a, * q = &b;

	printf("%d + %d = %d\n", *p, *q, *p + *q);
	printf("%d - %d = %d\n", *p, *q, *p - *q);
	printf("%d * %d = %d\n", *p, *q, *p * *q);
	printf("%d / %d = %d\n", *p, *q, *p / *q);
}