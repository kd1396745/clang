#include<stdio.h>
main()
{
	int i, su;

	su = 0;
	for (i = 1; i <= 10; i++) {
		su += i;
		printf("1����%d�܂ł̘a=%d\n", i, su);
	}
}