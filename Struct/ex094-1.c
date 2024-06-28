#include<stdio.h>
#include<string.h>
#define CNT 5
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day date;
	char blood[5];
};
main()
{
	struct profile data[CNT] = { {"A",2000,1,1,"A"},{"B",2001,2,2,"B"},
		{"C",2002,3,3,"O"},{"D",2004,2,14,"AB"},{"E",2005,5,5,"O"} };
	struct profile* p;

	int i;
	for (p = data, i = 0; i < CNT; i++, p++) {
		if (p->date.tuki == 2) {
			printf("%s -- %d”N %2dŒŽ %2d“ú¶ ŒŒ‰tŒ^ %sŒ^\n",
				p->name,
				p->date.nen, p->date.tuki, p->date.hi,
				p->blood);
		}
	}
}