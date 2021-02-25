#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu() {
	printf("******************************\n");
	printf("*请输入选项对应的数字进行游戏*\n");
	printf("*******1、PLAY 0、EXIT********\n");
	printf("******************************\n");
}
void game() {
	int ret = 0;
	int guess = 0;
	int count = 0;
	ret = rand() % 100 + 1;
	while (count<10) {
		printf("请输入你猜的数字：");
		scanf("%d", &guess);
		if (guess > ret)
		{
			count++;
			printf("你猜的数字太大了!!!\n");
		}
		else if (guess < ret) {
			count++;
			printf("你猜的数字太小了!!!\n");
		}
		else {
			printf("--------恭喜你猜对了!!!--------\n");
			break;
		}
	}
	if (count == 10)
	{
		printf("----真遗憾10次都没猜对，游戏失败-----\n");
	}
}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择是否开始游戏：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:   
			system("cls");
			printf("*********!开始游戏！**********\n游戏模式：会生成1-100以内的随机数字,猜到这个数字即游戏成功\n祝你玩得开心愉快！\n");
			game();
			break;
		case 0:
			printf("*********!退出游戏！**********\n");
			break;
		default:
			printf("你选择是无效的指令！请重新选择！\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}


