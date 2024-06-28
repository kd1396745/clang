#include<stdio.h>
struct gakka {
	char kosu[30];
	char kyoka[30];
	int tanni;
}g1;

int main(void)
{
	printf("コース名：");
	scanf("%s", &g1.kosu);
	printf("教科名：");
	scanf("%s", &g1.kyoka);
	printf("単位数：");
	scanf("%d", &g1.tanni);
	printf("\n");

	printf("コース名：%s\n", g1.kosu);
	printf("教科名：%s\n", g1.kyoka);
	printf("単位数：%d\n", g1.tanni);
}