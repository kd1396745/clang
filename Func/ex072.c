#include<stdio.h> //�߂�l�̂Ȃ��֐�
void display(int a); //�v���g�^�C�v�錾

main()
{
	int a;
	printf("data?:");
	scanf("%d", &a);
	display(a); //�֐�display�̌Ăяo��
}

//�֐���`
void display(int a)
{
	printf("���̓f�[�^=%d\n", a);
	return;
}