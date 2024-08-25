#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
    printf("%s\n","c:\\test\\test.c");
    //转义字符1：\ddd为八进制数的ASCII码。\xdd为十六进制数的ASCII码。
    printf("%c\n", '\130');
    printf("%d\n", strlen("c:\test\328\test.c"));
    printf("%d\n", strlen("c:\test\x32\test.c"));//\32算一个，因为8不是八进制的。\x32也是一个。
    return 0;
    //转义字符，即转变了原来的意思。\t是空格（占一个长度），\n是换行。此外还有很多转义字符，具体见表。
    //打印字符用%c,用单引号，打印字符串用%s，用双引号。
//可以用\\来取消转义字符。
}