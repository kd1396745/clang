#include<stdio.h>
void error_msg(void);//�v���g�^�C�v�錾
main()
{
	int a, b;
	printf("data1 data2 ?;");
	scanf("%d%d", &a, &b);
	if (b == 0) {

		/*���������̊֐����Ăяo���Ƃ��A()���͂Ȃɂ������Ȃ�*/
		error_msg();//�֐�errro_msg �Ăяo��
	}
	else {
		printf("%d / %d = %d�E�E�E%d\n", a, b, a / b, a % b);
	}
}

//�֐���`
void error_msg(void)
{
	printf("�O�Ŋ���Z�͏o���܂���\n");
	return; //�߂�l�����̂Ƃ��͏ȗ��\
}