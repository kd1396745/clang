#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int pl,cpu;

	printf("何を出しますか？\n(1：グー　2：チョキ　3：パー)＞");
	scanf("%d", &pl);

	if (pl == 1) {
		printf("プレイヤーは、グーです。\n");
	}
	if (pl == 2) {
		printf("プレイヤーは、チョキです。\n");
	}
	if (pl == 3) {
		printf("プレイヤーは、パーです。\n");
	}

	srand(time(0));
	cpu = rand() % 3;
	if (cpu == 0) {
		printf("コンピュータは、グーです。\n");
	}
	if (cpu == 1) {
		printf("コンピュータは、チョキです。\n");
	}
	if (cpu == 2) {
		printf("コンピュータは、パーです。\n");
	}

	printf("\n");

	//プレイヤー勝ちパターン
	if ((pl == 1 && cpu == 1)//if((pl-cpu+3)%3==0);
		|| (pl == 2 && cpu == 2)
		|| (pl == 3 && cpu == 0)) {
		printf("プレイヤーの勝ちです。\n");
	}
	//あいこ
	if ((pl == 1 && cpu == 0)//if((pl-cpu+3)%3==2);
		|| (pl == 2 && cpu == 1)
		|| (pl == 3 && cpu == 2)) {
		printf("あいこです。\n");
	}
	//プレイヤー負けパターン
	if ((pl == 1 && cpu == 2)//if((pl-cpu+3)%3==1);
		|| (pl == 2 && cpu == 0)
		|| (pl == 3 && cpu == 1)) {
		printf("プレイヤーの負けです。\n");
	}
}