#include<stdio.h>
main()
{
	int d[10] = {10,2,30,77,16,3,47,29,37,33};
	int i, s;

	printf("�T���ls�����:");
	scanf("%d", &s);

	//���`�T��(���j�A�T�[�`)
	for (i = 0; i < 10; i++) {
		if (s == d[i]) {
			break;
		}
	}

	if (i == 10) {
		printf("������Ȃ�����...\n");
	}
	else {
		printf("�T���l%d���Ad[%d]�Ŕ����I\n",s,i);
	}
}