#include<stdio.h>
struct gakka {
	char kosu[30];
	char kyoka[30];
	int tanni;
}g1;

int main(void)
{
	printf("�R�[�X���F");
	scanf("%s", &g1.kosu);
	printf("���Ȗ��F");
	scanf("%s", &g1.kyoka);
	printf("�P�ʐ��F");
	scanf("%d", &g1.tanni);
	printf("\n");

	printf("�R�[�X���F%s\n", g1.kosu);
	printf("���Ȗ��F%s\n", g1.kyoka);
	printf("�P�ʐ��F%d\n", g1.tanni);
}