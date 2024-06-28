#include<stdio.h>
main()
{
	int i;
	char j;

	printf("アルファベット小文字？");
	scanf("%c", &j);

	for (i = j; i >= j && i <= 122; i++) {
		printf("%c ", (char)i-32);
	}
}