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

		printf("整数(-999で終了)");
		scanf("%d", &num);
	} while (num != -999);
	cnt--; //最初の1回分を引く

	//printf("合計=%d\n", sum);
	//printf("平均=%f\n",(float)sum / (float)cnt);
    printf("合計=%d \t平均=%f", sum, (float)sum / cnt);
}