#include<stdio.h>
main()
{
	int i, sum, su;

	printf("���́H ");
	scanf("%d", &su);

	for (sum = 0, i = 0; su != -999; i++) {
		sum += su;
		printf("���́H ");
		scanf("%d", &su);
	}
	printf("���v=%d \t����=%.2f \n", sum, (float)sum / i);
	//�����ɂ��邩��(float)������
}