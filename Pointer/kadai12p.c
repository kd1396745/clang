#include<stdio.h>
main()
{
	char* day[] = { "Sunday","Monday","Tuesday","Wendnesday",
		            "Thursday","Friday","Saturday",NULL };
	char** p = day;
	int i;

	//パターン①  day[i]の形式で文字列を表示
	for (i = 0; i < 7; i++) {
		printf("%s\n", day[i]);
	}
	printf("\n");

	//パターン②-1  *pを用いて文字列を表示
	for (i = 0; i < 7; i++) {
		printf("%s\n", *(p + i));
	}
	printf("\n");

	//パターン②-2 
	while (*p) {
		printf("%s\n", *p++);
	}
}