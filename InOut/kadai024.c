#include<stdio.h>
main()
{
	int ia, ib;
	ia = 0;
	ib = 0;

	printf("2�̐��l?");
	scanf("%d%d", &ia, &ib);
	printf("***%d��%d�̎l�����Z***\n", ia, ib);
	printf("%d+%d=%d\n",ia,ib,ia+ib);
	printf("%d-%d=%d\n",ia,ib,ia-ib);
	printf("%d*%d=%d\n",ia,ib,ia*ib);
	printf("%d/%d=%d���܂�%d\n",ia,ib,ia/ib,ia%ib);
}