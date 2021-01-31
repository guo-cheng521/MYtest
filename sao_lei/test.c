#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu() {
	printf("*********************\n");
	printf("********1.Play*******\n");
	printf("********0.Exit*******\n");
	printf("*********************\n");
}

void game() {
	//�׵���Ϣ�洢
	char mine[ROWS][COLS] = { 0 };
	//�Ų���׵���Ϣ�洢
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(show, ROW, COL);
	//������
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
		printf("������ָ�>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��Чָ����������\n");
			break;
		}
	} while (input);
}

int main() {
	test();
	return 0;
}