#include<stdio.h>
main()
{
	char s[21];
	int i, no;

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]‚Ì•¡‡‰»ƒL[„", i);
		scanf("%d", &no);
		s[i] = s[i] - no;
	}
	printf("•¡‡‰»Ï‚İ•¶š—ñ‚ÍA%s\n",s);
}