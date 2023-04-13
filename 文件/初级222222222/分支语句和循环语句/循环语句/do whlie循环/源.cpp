#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h> 


//do while 循环是用的最少的循环，但有些东西就是这样，存在即合理

int main()
{
	//do
	//	循环语句
	//while表达式；


	//打印一到十
	int i = 1;
	do
	{
		if (i == 7)
			break;                   //使用continue 的效果和while 循环是相似的，死循环
		printf("%d\n", i);
		i++;
	} 
	while (i <= 10);

	return 0;
}