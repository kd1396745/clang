#include<stdio.h>
main()
{
	int a;

	printf("0����100�܂ł̐����H");
	scanf("%d", &a);

	if (a >= 90) {
		printf("���̐��l�̔��茋�ʂ́u�T�v�ł�\n");
	}
	else {
		if (a >= 80 && a <= 89) {
			printf("���̐��l�̔��茋�ʂ́u�S�v�ł�\n");
		}
		else {
			if (a >= 50 && a <= 79) {
				printf("���̐��l�̔��茋�ʂ́u�R�v�ł�\n");
			}
			else {
				if (a >= 30 && a <= 49) {
					printf("���̐��l�̔��茋�ʂ́u�Q�v�ł�\n");
				}
				else {
					printf("���̐��l�̔��茋�ʂ́u�P�v�ł�\n");
				}
			}
		}
	}
}