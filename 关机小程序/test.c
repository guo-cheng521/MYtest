#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
again:	
	printf("��ĵ��Ի���60s�ػ����������Һ�˧��ֹ�ػ�\n������:>");
	scanf("%s", arr);
	if (strcmp(arr, "�Һ�˧") == 0)
	{
		system("shutdown -a");
	}
	else {
		goto again;
	}

	return 0;
}