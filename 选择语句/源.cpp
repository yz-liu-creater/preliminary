#define _CRT_SECURE_NO_WARNINGS
//以下是C语言的原本注释。
/*
可惜他不能嵌套注释。
*/
//下面进入选择语句正题。
#include<stdio.h>
int main()
{
	int dream = 0;
	printf("来到清华，你后悔吗(后悔选1/不后悔选0）？\n");
	scanf("%d", &dream);
	if (dream == 1)
	printf("除了没有那些，这里一切都好\n");
	else
		printf("加油吧，要记得那些啊\n");
		return 0;
}