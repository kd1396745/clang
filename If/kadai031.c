#include<stdio.h>
main()
{
	float a, b;

	printf("2‚Â‚ÌÀ”’lH");
	scanf("%f%f", &a, &b);

	if (a < b) {
		printf("‘å‚«‚¢‚Ù‚¤‚Í%f\n", b);
	}
	else {
		printf("‘å‚«‚¢‚Ù‚¤‚Í%f\n", a);
	}
}