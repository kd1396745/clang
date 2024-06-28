#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4 };
	float sum,ave;
	int i;
	int   *p_a; //ポインタ変数
	float *p_b; //ポインタ変数

	//p_aへa配列の先頭アドレスを入れる
	p_a = a;

	for (i = 0,sum = 0; i < 6; i++) //データ数分ループする (i=0;i<6;i++,p_a++)
	{
		sum += *p_a;
		p_a++;//次のデータへ進む
	}
	ave = sum / i;
	printf("配列a 合計=%.0f\t\t平均=%.3f\n", sum, ave);

	//p_bへb配列の先頭アドレスを入れる
	p_b = b;

	for (i = 0,sum = 0; i < 4; i++)//データ数分ループ　(i=0;i<4;i++,p_b++)
	{
		sum += *p_b;
		p_b++;//次のデータに進む
	}
	ave = sum / i;
	printf("配列b 合計=%.3f\t平均=%.3f\n", sum, ave);
}