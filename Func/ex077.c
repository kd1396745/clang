#include<stdio.h>
void maxmin(int a, int b, int c, int* p_max, int* p_min);
main()
{
	int a, b, c, max, min;

	printf("�������R����:");
	scanf("%d%d%d", &a, &b, &c);

	maxmin(a, b, c, &max, &min); //�֐��Ăяo��

	printf("�ő�l = %d  �ŏ��l = %d\n", max, min);
}

void maxmin(int a, int b, int c, int* p_max, int* p_min)
{
	//�ő�l�����߂�
	*p_max = a;
	if (*p_max < b) {
		*p_max = b;
	}
	if (*p_max < c) {
		*p_max = c;
	}

	//�ŏ��l�����߂�
	*p_min = a;
	if (*p_min > b) {
		*p_min = b;
	}
	if (*p_min > c) {
		*p_min = c;
	}
	return;
}