#include<stdio.h>
main()
{
	char* day[] = { "Sunday","Monday","Tuesday","Wendnesday",
		            "Thursday","Friday","Saturday",NULL };
	char** p = day;
	int i;

	//�p�^�[���@  day[i]�̌`���ŕ������\��
	for (i = 0; i < 7; i++) {
		printf("%s\n", day[i]);
	}
	printf("\n");

	//�p�^�[���A-1  *p��p���ĕ������\��
	for (i = 0; i < 7; i++) {
		printf("%s\n", *(p + i));
	}
	printf("\n");

	//�p�^�[���A-2 
	while (*p) {
		printf("%s\n", *p++);
	}
}