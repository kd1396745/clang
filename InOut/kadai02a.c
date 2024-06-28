#include<stdio.h>
main()
{
	double a, b;
	printf("2‚Â‚ÌÀ”’lH");
	scanf("%lf%lf", &a, &b);

	printf("***%.1f‚Æ%.1f‚Ìl‘¥‰‰Z***\n", a, b);
	printf("˜a%f ·%f Ï%f ¤%f", a + b, a - b, a * b, a / b);
}