#include<stdio.h>
main()
{
	char data1[100], data2[100], a[100];
	int i,j;

	printf("文字列1を入力:");
	scanf("%s", data1);
	printf("文字列2を入力:");
	scanf("%s", data2);

	printf("moji 1 = %s \t moji 2 = %s\n", data1, data2);
	printf("入れ替えると\n");
	for (i = 0; a[i] = data1[i]; i++);
	for (i = 0; data1[i] = data2[i]; i++);
	for (i = 0; data2[i] = a[i]; i++);
	printf("moji 1 = %s \t moji 2 = %s\n", data1, data2);
}