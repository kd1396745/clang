#include<stdio.h>
main()
{
	char a;

	printf("1�������́H");
	scanf("%c", &a);

	if (a >= 'A' && a <= 'Z') {
		printf("���̕����́u�啶���v�ł�\n");
	}
	else {
		if (a >= 'a' && a <= 'z') {
			printf("���̕����́u�������v�ł�\n");
		}
		else {
			printf("ERROR:�A���t�@�x�b�g����͂��Ă�������\n");
		}
	}
}