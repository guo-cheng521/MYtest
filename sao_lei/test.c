#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu() {
	printf("*********************\n");
	printf("********1.Play*******\n");
	printf("********0.Exit*******\n");
	printf("*********************\n");
}

void game() {
	//雷的信息存储
	char mine[ROWS][COLS] = { 0 };
	//排查出雷的信息存储
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	FindMine(mine, show, ROW, COL);

}

void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请输入指令：>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("无效指令，请从新输入\n");
			break;
		}
	} while (input);
}

int main() {
	test();
	return 0;
}