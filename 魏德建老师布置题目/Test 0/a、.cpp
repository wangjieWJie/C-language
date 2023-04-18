#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
int main()
{
	int i = 5;
	//printf("%d\n",(i++));        //结果是5
	printf("%d\n", (++i) + (++i) + (i++));           //结果是 6+7+8=21         网友每一个能解释为啥的，说的最多的是未定义行为（undefined Behaviour）
	printf("%d\n", i);
	int j = 7;
	printf("%d\n", 13 + (j++));        //结果是 20

	int a = 5;
	printf("倪高：：%d  %d\n", a++, a++);     //课本说 VC环境下是   5   5  ，20年出版的课本了


	return 0;
}