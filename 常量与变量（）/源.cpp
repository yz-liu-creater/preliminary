//如何让计算机听懂常量与变量？
#include<stdio.h>
int main()
{
	printf("ez\n");
	//sizeof:大小是多少。
	//类型  变量的名字；
	int age = 18;
	age = age + 1;
	printf("%d\n", age);
	float support = 100.0;
	printf("%f\n", support);
	//%f是float而%lf是double;
	return 0;
}