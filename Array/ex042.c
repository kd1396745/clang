#include<stdio.h>
main()
{
	char data[6] = "Apple";
	int i;

	printf("1文字ずつ表示\n");
	for (i = 0; data[i] != '\0'; i++) {
		printf("%c", data[i]);
	}
	printf("\n");

	printf("文字列で表示\n");
	printf("%s", data);
}