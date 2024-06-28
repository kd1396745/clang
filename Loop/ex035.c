#include<stdio.h>
main()
{
	int no, su;
    su = 0;
	
	//無限ループ
	while (1) {
		printf("数を入れて:");
		scanf("%d", &no);

		//breakを呼び出す
		if (no == -999) { break; }

		//加算
		su += no;
	}
	printf("合計=%d\n", su);
}