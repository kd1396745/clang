#include<stdio.h>
main()
{
	int a;

	printf("�����R�[�h(-1�œ��͏I��)�H");
	scanf("%d", &a);

	while (a != -1) {
		printf("%c\n", a);

		printf("�����R�[�h(-1�œ��͏I��)�H");
		scanf("%d", &a);
	}
}