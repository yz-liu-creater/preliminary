#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
    printf("%s\n","c:\\test\\test.c");
    //ת���ַ�1��\dddΪ�˽�������ASCII�롣\xddΪʮ����������ASCII�롣
    printf("%c\n", '\130');
    printf("%d\n", strlen("c:\test\328\test.c"));
    printf("%d\n", strlen("c:\test\x32\test.c"));//\32��һ������Ϊ8���ǰ˽��Ƶġ�\x32Ҳ��һ����
    return 0;
    //ת���ַ�����ת����ԭ������˼��\t�ǿո�ռһ�����ȣ���\n�ǻ��С����⻹�кܶ�ת���ַ����������
    //��ӡ�ַ���%c,�õ����ţ���ӡ�ַ�����%s����˫���š�
//������\\��ȡ��ת���ַ���
}