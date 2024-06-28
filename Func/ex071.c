#include<stdio.h>
int gokei(int n1, int n2, int n3);
float heikin(int n1, int n2, int n3);

main()
{
	int a, b, c;
	int g;
	float h;

	printf("®”‚ğ3‚Â“ü—Í:");
	scanf("%d%d%d", &a, &b, &c);

	g = gokei(a, b, c);
	h = heikin(a, b, c);
	printf("‡Œv=%d\t•½‹Ï=%.2f\n", g, h);
}
int gokei(int n1, int n2, int n3)
{
	int ans;
	ans = n1 + n2 + n3;
	return(ans);
}
float heikin(int n1, int n2, int n3)
{
	float ans;
	ans = (n1 + n2 + n3) / 3.0;
	return(ans);
}

/*#include<stdio.h>
int add(int a, int b, int c);
main()
{
	int a, b, c, gokei, heikin;
	printf("®”‚ğ3‚Â“ü—Í:");
	scanf("%d%d%d", &a,&b, &c);
	gokei = add(a, b, c);
	heikin = add(a, b, c);
	printf("‡Œv‚Í%d\t•½‹Ï‚Í%.2f\n", gokei,(float)heikin);
}

int add(int a, int b, int c)
{
	int ans,ans2;
	ans = a + b + c;
	ans2 = (a + b + c) / 3.0;
	return(ans);
}*/