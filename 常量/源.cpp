#define _CRT_SECURE_NO_WARNINGS
//����
#include<stdio.h>
//�������
enum Sex
{
	MALE=1,
	FEMALE
};
int main()
{
	//1.���泣��
	3.14;
	//2.const���εĳ�����
	const int num = 20;
	printf("%d\n", num);
	//const�ǹ̶������ĺ������������Ǳ��������ܽ���һЩ����������
	//3.#define����ı�ʶ��������
#define QQ  9964
	int clown = QQ;
	printf("%d\n", clown);
	//4.ö�ٳ�����
	//����һһ�оٵĳ���������������ǰ��
	enum Sex s = MALE;
	//enum���о��˳����Ժ����п��ܵĳ�����ʽ������enum������Ȼ������Ĭ�ϴ�0��ʼ�����ǿ��Ը���һ������ֵ��
	printf("%d\n", s);
	return 0;


}