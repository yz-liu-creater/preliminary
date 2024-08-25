#define _CRT_SECURE_NO_WARNINGS
//字符串是被双引号引起的一串字符。\0是字符串的结束标志。每一个字符串后面都隐藏了一个元素\0。
//数组是一种相同类型的元素。
#include<stdio.h>
#include<string.h>
//strlen函数（求字符串长度）所需要用到的头文件。
int main()
{
	char arr[] = "going";
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	char arr3[] = { 'a','b','c','\0' };
	printf("%s\n",arr1);
	printf("%s\n",arr2);
	printf("%s\n",arr3);
	//strlen求字符串的长度。
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	//求长度时不算\0。

	return 0;
}