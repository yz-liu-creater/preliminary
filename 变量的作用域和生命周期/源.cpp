#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int lyz = 1;
//全局变量的作用域是整个工程。
int main()
{
	printf("%d\n", lyz);
	{
		int a = 10;
		//局部变量的作用域是变量所在的{}。
		printf("a=%d\n", a);
		printf("%d\n", lyz);
	}
	printf("%d\n", lyz);
	return 0;
}
//生命周期
//变量的生命周期是从变量创造到销毁的时间段。}能够销毁变量。