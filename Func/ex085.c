#include<stdio.h>
void cat(char* p_a, char* p_b);
main()
{
	char a[256], b[256];
	printf("�z��a:");
	gets(a);
	printf("�z��b:");
	gets(b);
	cat(a, b);
	printf("�z��a:%s\n",a);
}

void cat(char* p_a, char* p_b)
{
	while (*p_a != '\0') {
		p_a++;
	}
	while (*p_b != '\0') {
		*p_a = *p_b;
		p_a++;
		p_b++;
	}
	*p_a = '\0';
	return;
}