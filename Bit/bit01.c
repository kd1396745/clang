#include<stdio.h>
enum BitState
{
	Base = 0,           //00000000 �ʏ���
	Poison = 1 << 0,    //00000001 �ŏ��
	Sleep = 1 << 1,     //00000010 ������
	Paralysis = 1 << 2, //00000100 ��჏��
	Burn = 1 << 3,      //00001000 �₯�Ǐ��
	AtkUp = 1 << 4,     //00010000 �U���̓A�b�v���
	AtkDown = 1 << 5    //00100000 �U���̓_�E�����
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangFlag(UINT* s);
void ClearFlag(UINT* s);

main()
{
	UINT MyState = Base;
	ChangFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UINT s)
{
	printf("***���݂̏��***\n");
	if (s & Poison) {
		printf("��\n");
	}
	if (s & Sleep) {
		printf("����\n");
	}
	if (s & Paralysis) {
		printf("���\n");
	}
	if (s & Burn) {
		printf("�₯��\n");
	}
	if (s & AtkUp) {
		printf("�U���̓A�b�v\n");
	}
	if (s & AtkDown) {
		printf("�U���̓_�E��\n");
	}
	if (s == Base) {
		printf("�������\n");
	}
	printf("****************\n");
}
void ChangFlag(UINT* s)
{
	int a;
	while (1) {
		printf("�ǂ̏�Ԃɂ��܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�₯�� 5:�U����  6:�U����  0:���͏I��>\n");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:     //1�`6�ɓ��Ă͂܂�Ȃ��Ƃ�
			break;
		}
	}
}
void ClearFlag(UINT* s)
{
	int b;
	while (1) {
		printf("�ǂ̏�Ԃ��������܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�₯�� 5:�U����  6:�U����  7:�S�� 0:���͏I��>\n");
		scanf("%d", &b);
		if (b == 0) {
			break;
		}
		switch (b) {
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:  //�S�Ẵt���O��off=������Ԃɂ���
			*s = Base;
			break;
		default:
			break;
		}
	}
}