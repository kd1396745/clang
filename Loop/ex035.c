#include<stdio.h>
main()
{
	int no, su;
    su = 0;
	
	//�������[�v
	while (1) {
		printf("��������:");
		scanf("%d", &no);

		//break���Ăяo��
		if (no == -999) { break; }

		//���Z
		su += no;
	}
	printf("���v=%d\n", su);
}