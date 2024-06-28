#include<stdio.h>
#include<string.h>
#define CNT 5
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile data[CNT];
	struct profile* p;

	int i;
	for (p = data, i = 0; i < CNT; i++, p++) {
		printf("%dl–Ú@ (–¼‘O):", i + 1);
		scanf("%s", p->name);
		printf("\t(¶”NŒŽ“ú):");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("\t(ŒŒ‰tŒ^):");
		scanf("%s", p->blood);
	}
	for (p = data, i = 0; i < CNT; i++, p++) {
		if (strcmp(p->blood, "A") == 0) {
			printf("%s -- %d”N %dŒŽ %d“ú¶ ŒŒ‰tŒ^ %sŒ^\n",
				p->name,
				p->birth[0], p->birth[1], p->birth[2],
				p->blood);
		}
	}
}