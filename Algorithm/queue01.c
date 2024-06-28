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
		printf("\n\n�� �G���L���[��i�A�f�L���[��o����͂��ā�");
		key = getche();
		printf("\n");
		
		//�G���L���[����
		if (key == 'i') {
			printf("�f�[�^���́�");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1) {
				printf("\n�� �L���[�������ς��ł� ��\n");
			}
			else {
				display();
			}
		}

		//�f�L���[����
		if (key == 'o') {
			result = dequeue(&data);
			if (result == -1) {
				printf("\n�� �L���[����ł���\n");
			}
			else {
				printf("�L���[����f�[�^%d�����o���܂���\n", data);
				display();
			}
		}
	} while (key != 'e');
}

//�L���[�\���֐�
void display(void)
{
	int i;

	printf("\n===���݂̃L���[�̓��e===\n");
	for (i = 0; i < QUEUESIZE; i++) {
		printf("queue[%2d]��%5d", i, queue[i]);
		if (i == head) {
			printf("�� head�������Ă��鏊(����head��%d)", head);
		}
		if (i == tail) {
			printf("�� head�������Ă��鏊(����tail��%d)", tail);
		}
		printf("\n");
	}
	return;
}

//�G���L���[����֐�
int enqueue(int d)
{
	if ((tail+1) % QUEUESIZE == head) { return -1; } //�L���[�������ς��̂Ƃ�
	queue[tail] = d; //�L���[��tail�ʒu�փf�[�^������
	tail++;
	tail = tail % QUEUESIZE; //tail��z��͈͓̔��ɕ␳
	return 0;
}

//�f�L���[����֐�
int dequeue(int* pd)
{
	if (head == tail) { return -1; } //�L���[����̂Ƃ�
	*pd = queue[head]; //�L���[��head�ʒu����f�[�^�����o����pd�Ԓn�̒��ɓ����
	head++;
	queue[head] = 0; //�m�F���₷�����邽��
	head = head % QUEUESIZE;
	return 0;
}