#include<stdio.h>
main()
{
	int gokei, ia;
	gokei = 0;
	//ia=0; を入れても出来る(p.24)
	printf("数を入れて");
	scanf("%d", &ia);

	//iaが-999じゃない間は繰り返す
	while (ia != -999) {
		gokei += ia; //gokeiにiaを足し込む
		
		printf("数を入れて");
		scanf("%d", &ia);
	}
	printf("合計＝%d\n", gokei);
}