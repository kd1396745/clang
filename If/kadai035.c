#include<stdio.h>
main()
{
	int a;

	printf("�����H");
	scanf("%d", &a);

	if (a > 0) {
		printf("���͒l�́u�v���X�v�ł�\n");
	}
	else {
		if (a == 0){
			printf("���͒l�́u�O�v�ł�\n");
		}
		else {
			printf("���͒l�́u�}�C�i�X�v�ł�\n");
		}
	}
}