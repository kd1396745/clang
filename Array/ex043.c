#include<stdio.h>
main()
{
	char data[] = "orange";
	int i;

	printf("文字列:%s", data);
	/*i = 0;
	while (data[i] != '\0') {
		i++;
	}
	printf("\n文字数は%d文字\n", i);*/
	for (i = 0; data[i] != '\0'; i++);
	printf("\n文字数は%d文字\n", i);
}