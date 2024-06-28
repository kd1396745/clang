#include<stdio.h>
main()
{
	int d[10] = {10,5,30,77,16,3,47,29,37,33};
	int s, i;

	printf("’Tõ’l‚ð“ü—Í:");
	scanf("%d", &s);

	d[10] = s;
	for (i = 0; s != d[i]; i++) {

	}
	if (i >= 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½...\n");
	}
	else {
		printf("”z—ñ‚Ì%d”Ô–Ú‚ÉŒ©‚Â‚©‚Á‚½!\n", i);
	}
}