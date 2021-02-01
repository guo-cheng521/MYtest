#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
again:	
	printf("你的电脑还有60s关机，请输入我很帅阻止关机\n请输入:>");
	scanf("%s", arr);
	if (strcmp(arr, "我很帅") == 0)
	{
		system("shutdown -a");
	}
	else {
		goto again;
	}

	return 0;
}