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
	struct ken ken_data[] = { {1,"–kŠC“¹",NULL},{2,"ÂXŒ§",NULL},
		{3,"ŠâŽèŒ§",NULL},{4,"‹{éŒ§",NULL},{5,"H“cŒ§",NULL},
		{6,"ŽRŒ`Œ§",NULL},{7,"•Ÿ“‡Œ§",NULL},{DATA_END,"",NULL} };
	struct ken* p, * wp;

	int a;
	printf("‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢ (1:•\Ž¦@2:’Ç‰Á@3:íœ@4:I—¹)");
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