#include<stdio.h>
main()
{
	char s[50];
	int i;

	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++) {
		s[i] = s[i] - 1;
	}
	printf("•¡‡Ï‚İ•¶š—ñ‚Í%s\n", s);
}