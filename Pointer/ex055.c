#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4 };
	float sum,ave;
	int i;
	int   *p_a; //�|�C���^�ϐ�
	float *p_b; //�|�C���^�ϐ�

	//p_a��a�z��̐擪�A�h���X������
	p_a = a;

	for (i = 0,sum = 0; i < 6; i++) //�f�[�^�������[�v���� (i=0;i<6;i++,p_a++)
	{
		sum += *p_a;
		p_a++;//���̃f�[�^�֐i��
	}
	ave = sum / i;
	printf("�z��a ���v=%.0f\t\t����=%.3f\n", sum, ave);

	//p_b��b�z��̐擪�A�h���X������
	p_b = b;

	for (i = 0,sum = 0; i < 4; i++)//�f�[�^�������[�v�@(i=0;i<4;i++,p_b++)
	{
		sum += *p_b;
		p_b++;//���̃f�[�^�ɐi��
	}
	ave = sum / i;
	printf("�z��b ���v=%.3f\t����=%.3f\n", sum, ave);
}