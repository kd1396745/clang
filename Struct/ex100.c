#include<stdio.h>
#define DATA_END -1
struct ken {
	int code;
	char name[20];
	struct ken* next;
};
void
main()
{
	struct ken ken_data[] = { {1,"北海道",NULL},{2,"青森県",NULL},
		{3,"岩手県",NULL},{4,"宮城県",NULL},{5,"秋田県",NULL},
		{6,"山形県",NULL},{7,"福島県",NULL},{DATA_END,"",NULL} };
	struct ken* p, * wp;

	int a;
	printf("選択してください (1:表示　2:追加　3:削除　4:終了)");
	scanf("%d", &a);

	p = wp = ken_data;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	for (p = ken_data; p->code != DATA_END; p = p->next) {
		printf("%d\t%s\n", p->code, p->name);
	}
}