#include<stdio.h>
main()
{
	int a, b, c;
	int *p_a, *p_b; //�|�C���^�ϐ�

	a = 50;
	b = 10;

	p_a = &a; //a�̃A�h���X�����߂�
	p_b = &b; //b�̃A�h���X�����߂�

	c = *p_a + *p_b; //�|�C���^�ϐ����g���ĉ��Z

	printf("%d + %d = %d\n", a, b, c);
}