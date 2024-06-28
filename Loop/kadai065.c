#include<stdio.h>
main()
{
	int num,sum,cnt;

	num = 0;
	sum = 0;
	cnt = 0;

	do {
		sum += num;
		cnt++;

		printf("®”(-999‚ÅI—¹)");
		scanf("%d", &num);
	} while (num != -999);
	cnt--; //Å‰‚Ì1‰ñ•ª‚ğˆø‚­

	//printf("‡Œv=%d\n", sum);
	//printf("•½‹Ï=%f\n",(float)sum / (float)cnt);
    printf("‡Œv=%d \t•½‹Ï=%f", sum, (float)sum / cnt);
}