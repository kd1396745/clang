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

		printf("����(-999�ŏI��)");
		scanf("%d", &num);
	} while (num != -999);
	cnt--; //�ŏ���1�񕪂�����

	//printf("���v=%d\n", sum);
	//printf("����=%f\n",(float)sum / (float)cnt);
    printf("���v=%d \t����=%f", sum, (float)sum / cnt);
}