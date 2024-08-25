#define _CRT_SECURE_NO_WARNINGS
//常量
#include<stdio.h>
//就是这里。
enum Sex
{
	MALE=1,
	FEMALE
};
int main()
{
	//1.字面常量
	3.14;
	//2.const修饰的常变量
	const int num = 20;
	printf("%d\n", num);
	//const是固定变量的函数，但它还是变量。不能进行一些常量操作。
	//3.#define定义的标识符常量。
#define QQ  9964
	int clown = QQ;
	printf("%d\n", clown);
	//4.枚举常量。
	//可以一一列举的常量。见主函数以前。
	enum Sex s = MALE;
	//enum是列举了常量以后所有可能的出现形式。再用enum调出，然后依次默认从0开始。但是可以给第一个赋初值。
	printf("%d\n", s);
	return 0;


}