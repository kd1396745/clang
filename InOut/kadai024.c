#include<stdio.h>
main()
{
	int ia, ib;
	ia = 0;
	ib = 0;

	printf("2‚Â‚Ì”’l?");
	scanf("%d%d", &ia, &ib);
	printf("***%d‚Æ%d‚Ìl‘¥‰‰Z***\n", ia, ib);
	printf("%d+%d=%d\n",ia,ib,ia+ib);
	printf("%d-%d=%d\n",ia,ib,ia-ib);
	printf("%d*%d=%d\n",ia,ib,ia*ib);
	printf("%d/%d=%d‚ ‚Ü‚è%d\n",ia,ib,ia/ib,ia%ib);
}