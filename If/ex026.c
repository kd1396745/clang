#include<stdio.h>
main()
{
	int a;
	
	printf("������́F");
	scanf("%d", &a);

	if (a == 2) {
		printf("�ŏI����28���ł�\n");
	}
	else {
		if (a == 4 || a == 6 || a == 9 || a == 11) {
			printf("�ŏI����30���ł�\n");
		}
		else {
			printf("�ŏI����31���ł�\n");
		}
	}
}
