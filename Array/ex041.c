#include<stdio.h>
main()
{
	float box[3], su;
	int i;

	for (su = 0,i = 0; i < 3; i++) {
		printf("���������:");
		scanf("%f", &box[i]);

		su += box[i];
	}
	printf("���v��%.2f�ł�\n���ς�%.2f�ł�\n", su, su / 3);
}