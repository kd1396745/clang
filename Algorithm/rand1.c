#include<stdio.h>
#include<stdlib.h>//�������g���Ƃ��ɕK�v
#include<time.h>//�������g���Ƃ��ɕK�v
main()
{
	int kazu;

	srand(time(0));//������������(�V���b�t��)����
	rand();
	rand();
	kazu = rand();//0�`32767�͈̔͂ŗ��������߂�
	printf("��������������%d�ł�\n", kazu);
}