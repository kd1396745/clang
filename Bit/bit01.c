#include<stdio.h>
enum BitState
{
	Base = 0,           //00000000 通常状態
	Poison = 1 << 0,    //00000001 毒状態
	Sleep = 1 << 1,     //00000010 眠り状態
	Paralysis = 1 << 2, //00000100 麻痺状態
	Burn = 1 << 3,      //00001000 やけど状態
	AtkUp = 1 << 4,     //00010000 攻撃力アップ状態
	AtkDown = 1 << 5    //00100000 攻撃力ダウン状態
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangFlag(UINT* s);
void ClearFlag(UINT* s);

main()
{
	UINT MyState = Base;
	ChangFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UINT s)
{
	printf("***現在の状態***\n");
	if (s & Poison) {
		printf("毒\n");
	}
	if (s & Sleep) {
		printf("眠り\n");
	}
	if (s & Paralysis) {
		printf("麻痺\n");
	}
	if (s & Burn) {
		printf("やけど\n");
	}
	if (s & AtkUp) {
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown) {
		printf("攻撃力ダウン\n");
	}
	if (s == Base) {
		printf("初期状態\n");
	}
	printf("****************\n");
}
void ChangFlag(UINT* s)
{
	int a;
	while (1) {
		printf("どの状態にしますか？\n");
		printf("1:毒 2:眠り 3:麻痺 4:やけど 5:攻撃↑  6:攻撃↓  0:入力終了>\n");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:     //1～6に当てはまらないとき
			break;
		}
	}
}
void ClearFlag(UINT* s)
{
	int b;
	while (1) {
		printf("どの状態を解除しますか？\n");
		printf("1:毒 2:眠り 3:麻痺 4:やけど 5:攻撃↑  6:攻撃↓  7:全回復 0:入力終了>\n");
		scanf("%d", &b);
		if (b == 0) {
			break;
		}
		switch (b) {
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:  //全てのフラグをoff=初期状態にする
			*s = Base;
			break;
		default:
			break;
		}
	}
}