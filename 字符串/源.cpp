#define _CRT_SECURE_NO_WARNINGS
//�ַ����Ǳ�˫���������һ���ַ���\0���ַ����Ľ�����־��ÿһ���ַ������涼������һ��Ԫ��\0��
//������һ����ͬ���͵�Ԫ�ء�
#include<stdio.h>
#include<string.h>
//strlen���������ַ������ȣ�����Ҫ�õ���ͷ�ļ���
int main()
{
	char arr[] = "going";
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	char arr3[] = { 'a','b','c','\0' };
	printf("%s\n",arr1);
	printf("%s\n",arr2);
	printf("%s\n",arr3);
	//strlen���ַ����ĳ��ȡ�
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	//�󳤶�ʱ����\0��

	return 0;
}