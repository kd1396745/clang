#include<stdio.h>
main()
{
	int d1, d2, d3, sum;
	float avg;

	printf("������3���́F");
	scanf("%d%d%d", &d1, &d2, &d3);

    sum = d1 + d2 + d3;
	avg = (float)sum / 3; //�L���X�g�i�^�ϊ��j

	printf("���v=%d\t����=%.2f\n", sum, avg); //\t(tab)���g�p
	printf("�_�˓d�q=%d\t����=%.2f\n", sum, avg); //\t�̗�
}