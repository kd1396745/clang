#include<stdio.h>
void error_msg(void);//プロトタイプ宣言
main()
{
	int a, b;
	printf("data1 data2 ?;");
	scanf("%d%d", &a, &b);
	if (b == 0) {

		/*引数無しの関数を呼び出すとき、()内はなにも書かない*/
		error_msg();//関数errro_msg 呼び出し
	}
	else {
		printf("%d / %d = %d・・・%d\n", a, b, a / b, a % b);
	}
}

//関数定義
void error_msg(void)
{
	printf("０で割り算は出来ません\n");
	return; //戻り値無しのときは省略可能
}