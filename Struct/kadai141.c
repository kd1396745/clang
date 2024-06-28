#include<stdio.h>
struct gakka {
	char kosu[30];
	char kyoka[30];
	int tanni;
};

int main(void)
{
	struct gakka g1 = { "ゲームソフトⅠ コース","C言語",8 };

	printf("コース名：%s\n", g1.kosu);
	printf("教科名：%s\n", g1.kyoka);
	printf("単位数：%d\n", g1.tanni);
}