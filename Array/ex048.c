#include<stdio.h>
main()
{
	int i, j, k, gokei;
	//ap[アパート番号][階][号室]
	int ap[2][2][3] = {
		{{3,4,5},{4,5,6}},//アパート0
		{{2,2,3},{2,5,6}} //アパート1
	};
	gokei = 0;

	for (i = 0; i < 2; i++) //アパート数分のループ
	{
		printf("アパート%d", i + 1);
		for (j = 0; j < 2; j++)// 階数分のループ
		{
			printf("(%d階):", j + 1);
			for (k = 0; k < 3; k++)// 号室分のループ
			{
				printf("%d ", ap[i][j][k]);
				gokei += ap[i][j][k];
			}
		}
		printf("\n");
	}
	printf("合計で%d人住んでいます\n", gokei);
}