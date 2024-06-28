#include<stdio.h>
#define QUEUESIZE 8
int queue[QUEUESIZE];
int head = 0;
int tail = 0;

void display(void);
int enqueue(int d);
int dequeue(int* pd);

main()
{
	int key, data, result;
	do {
		printf("\n\n◆ エンキューはi、デキューはoを入力して＞");
		key = getche();
		printf("\n");
		
		//エンキュー処理
		if (key == 'i') {
			printf("データ入力＞");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1) {
				printf("\n※ キューがいっぱいです ※\n");
			}
			else {
				display();
			}
		}

		//デキュー処理
		if (key == 'o') {
			result = dequeue(&data);
			if (result == -1) {
				printf("\n※ キューが空です※\n");
			}
			else {
				printf("キューからデータ%dを取り出しました\n", data);
				display();
			}
		}
	} while (key != 'e');
}

//キュー表示関数
void display(void)
{
	int i;

	printf("\n===現在のキューの内容===\n");
	for (i = 0; i < QUEUESIZE; i++) {
		printf("queue[%2d]は%5d", i, queue[i]);
		if (i == head) {
			printf("← headが示している所(現在headは%d)", head);
		}
		if (i == tail) {
			printf("← headが示している所(現在tailは%d)", tail);
		}
		printf("\n");
	}
	return;
}

//エンキューする関数
int enqueue(int d)
{
	if ((tail+1) % QUEUESIZE == head) { return -1; } //キューがいっぱいのとき
	queue[tail] = d; //キューのtail位置へデータを入れる
	tail++;
	tail = tail % QUEUESIZE; //tailを配列の範囲内に補正
	return 0;
}

//デキューする関数
int dequeue(int* pd)
{
	if (head == tail) { return -1; } //キューが空のとき
	*pd = queue[head]; //キューのhead位置からデータを取り出してpd番地の中に入れる
	head++;
	queue[head] = 0; //確認しやすくするため
	head = head % QUEUESIZE;
	return 0;
}