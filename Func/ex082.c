#include<stdio.h>
#include<string.h>
void sort(int* array, int size, int order);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	int i;
	char str[256];

	printf("�\�[�g���������:");
	gets(str);
	if (strcmp(str, "����") == 0) {
		sort(data, 8, 0);
	}
	else if (strcmp(str, "�~��") == 0) {
		sort(data, 8, 1);
	}
	else {
		printf("�\�[�g�����́A�������~���œ��͂��Ă�������\n");
		return 1;
	}
	for (i = 0; i < 8; i++) {
		printf("%d ", data[i]);
	}
}

void sort(int* array, int size, int order)
{
	int i, j, w;

	switch (order) {
	case 0://����
		for (i = 0; i < size - 1; i++) {
			for (j = i + i; j < size; j++) {
				if (*(array + i) > *(array + j)) {
					w = *(array + i);
					*(array + i) = *(array + j);
					*(array + j) = w;
				}
			}
		}
		break;

	case 1://�~��
		for (i = 0; i < size - 1; i++) {
			for (j = i + 1; j < size; j++) {
				if (*(array + i) < *(array + j)) {
					w = *(array + i);
					*(array + i) = *(array + j);
					*(array + j) = w;
				}
			}
		}
		break;
	}
}