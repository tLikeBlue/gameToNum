#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu() {
	printf("******************************\n");
	printf("*������ѡ���Ӧ�����ֽ�����Ϸ*\n");
	printf("*******1��PLAY 0��EXIT********\n");
	printf("******************************\n");
}
void game() {
	int ret = 0;
	int guess = 0;
	int count = 0;
	ret = rand() % 100 + 1;
	while (count<10) {
		printf("��������µ����֣�");
		scanf("%d", &guess);
		if (guess > ret)
		{
			count++;
			printf("��µ�����̫����!!!\n");
		}
		else if (guess < ret) {
			count++;
			printf("��µ�����̫С��!!!\n");
		}
		else {
			printf("--------��ϲ��¶���!!!--------\n");
			break;
		}
	}
	if (count == 10)
	{
		printf("----���ź�10�ζ�û�¶ԣ���Ϸʧ��-----\n");
	}
}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ���Ƿ�ʼ��Ϸ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:   
			system("cls");
			printf("*********!��ʼ��Ϸ��**********\n��Ϸģʽ��������1-100���ڵ��������,�µ�������ּ���Ϸ�ɹ�\nף����ÿ�����죡\n");
			game();
			break;
		case 0:
			printf("*********!�˳���Ϸ��**********\n");
			break;
		default:
			printf("��ѡ������Ч��ָ�������ѡ��\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}


