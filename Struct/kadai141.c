#include<stdio.h>
struct gakka {
	char kosu[30];
	char kyoka[30];
	int tanni;
};

int main(void)
{
	struct gakka g1 = { "�Q�[���\�t�g�T �R�[�X","C����",8 };

	printf("�R�[�X���F%s\n", g1.kosu);
	printf("���Ȗ��F%s\n", g1.kyoka);
	printf("�P�ʐ��F%d\n", g1.tanni);
}