#include<stdio.h>
main()
{
	char a;

	printf("��������́F");
	scanf("%c", &a);

	if (a >= 'A' && a <= 'Z') {
		printf("�ϊ������%c\n", a + 0x20);
	}
	else {
		if (a >= 'a' && a <= 'z') {
			printf("�ϊ������%c\n", a - 0x20);
		}
		else {
			printf("�G���[�F�A���t�@�x�b�g����͂��Ă�������\n");
		}
	}
}