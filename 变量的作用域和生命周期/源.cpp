#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int lyz = 1;
//ȫ�ֱ��������������������̡�
int main()
{
	printf("%d\n", lyz);
	{
		int a = 10;
		//�ֲ��������������Ǳ������ڵ�{}��
		printf("a=%d\n", a);
		printf("%d\n", lyz);
	}
	printf("%d\n", lyz);
	return 0;
}
//��������
//���������������Ǵӱ������쵽���ٵ�ʱ��Ρ�}�ܹ����ٱ�����