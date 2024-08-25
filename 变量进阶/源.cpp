#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a = 100;
int main()
{
	int a = 10;
		printf("%d\n", a);
		//局部优先
		//scanf是输入函数
		int b = 0;
		int c = 0;
		scanf("%d %d", &b, &c);
		printf("%d\n", b + c);
		return 0;
}