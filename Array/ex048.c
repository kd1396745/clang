#include<stdio.h>
main()
{
	int i, j, k, gokei;
	//ap[�A�p�[�g�ԍ�][�K][����]
	int ap[2][2][3] = {
		{{3,4,5},{4,5,6}},//�A�p�[�g0
		{{2,2,3},{2,5,6}} //�A�p�[�g1
	};
	gokei = 0;

	for (i = 0; i < 2; i++) //�A�p�[�g�����̃��[�v
	{
		printf("�A�p�[�g%d", i + 1);
		for (j = 0; j < 2; j++)// �K�����̃��[�v
		{
			printf("(%d�K):", j + 1);
			for (k = 0; k < 3; k++)// �������̃��[�v
			{
				printf("%d ", ap[i][j][k]);
				gokei += ap[i][j][k];
			}
		}
		printf("\n");
	}
	printf("���v��%d�l�Z��ł��܂�\n", gokei);
}