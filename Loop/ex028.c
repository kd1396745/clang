#include<stdio.h>
main()
{
	int gokei, ia;
	gokei = 0;
	//ia=0; ‚ğ“ü‚ê‚Ä‚ào—ˆ‚é(p.24)
	printf("”‚ğ“ü‚ê‚Ä");
	scanf("%d", &ia);

	//ia‚ª-999‚¶‚á‚È‚¢ŠÔ‚ÍŒJ‚è•Ô‚·
	while (ia != -999) {
		gokei += ia; //gokei‚Éia‚ğ‘«‚µ‚Ş
		
		printf("”‚ğ“ü‚ê‚Ä");
		scanf("%d", &ia);
	}
	printf("‡Œv%d\n", gokei);
}