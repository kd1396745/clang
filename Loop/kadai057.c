#include<stdio.h>
main()
{
	int i;
	char j;

	printf("�A���t�@�x�b�g�������H");
	scanf("%c", &j);

	for (i = j; i >= j && i <= 122; i++) {
		printf("%c ", (char)i-32);
	}
}