#include<stdio.h>
char moji(char c);

main()
{
	char a;
	int no;

	printf("�A���t�@�x�b�g1�����H");
	scanf("%c", &a);
	no = moji(a);
	printf("�߂�l�́A");

	if (no == 1) {
		printf("%d�Ȃ̂œ��͂��������́A�啶���ł�\n",no);
	}
	if (no == 0) {
		printf("%d�Ȃ̂œ��͂��������́A�������ł�\n",no);
	}
}
char moji(char a)
{
	if (moji >= 0x41 && moji <= 0x5A) {
		return(1);
	}
	else if (moji >= 0x61 && moji <= 0x7A) {
		return(0);
	}
}