#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int pl,cpu;

	printf("�����o���܂����H\n(1�F�O�[�@2�F�`���L�@3�F�p�[)��");
	scanf("%d", &pl);

	if (pl == 1) {
		printf("�v���C���[�́A�O�[�ł��B\n");
	}
	if (pl == 2) {
		printf("�v���C���[�́A�`���L�ł��B\n");
	}
	if (pl == 3) {
		printf("�v���C���[�́A�p�[�ł��B\n");
	}

	srand(time(0));
	cpu = rand() % 3;
	if (cpu == 0) {
		printf("�R���s���[�^�́A�O�[�ł��B\n");
	}
	if (cpu == 1) {
		printf("�R���s���[�^�́A�`���L�ł��B\n");
	}
	if (cpu == 2) {
		printf("�R���s���[�^�́A�p�[�ł��B\n");
	}

	printf("\n");

	//�v���C���[�����p�^�[��
	if ((pl == 1 && cpu == 1)//if((pl-cpu+3)%3==0);
		|| (pl == 2 && cpu == 2)
		|| (pl == 3 && cpu == 0)) {
		printf("�v���C���[�̏����ł��B\n");
	}
	//������
	if ((pl == 1 && cpu == 0)//if((pl-cpu+3)%3==2);
		|| (pl == 2 && cpu == 1)
		|| (pl == 3 && cpu == 2)) {
		printf("�������ł��B\n");
	}
	//�v���C���[�����p�^�[��
	if ((pl == 1 && cpu == 2)//if((pl-cpu+3)%3==1);
		|| (pl == 2 && cpu == 0)
		|| (pl == 3 && cpu == 1)) {
		printf("�v���C���[�̕����ł��B\n");
	}
}