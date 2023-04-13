#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

//  exp1 ? exp2 : exp3;

int main8()
{
	int a = 0;
	int b = 0;

	b = (a > 5 ? 3 : -3);

	printf("三目操作符运算结果：%d\n", b);     //结果 -3


	//比较大小
	a = 65;
	b = 45;
	int max = (a > b ? a : b);

	//注意：因为不容易看懂，所以不要写的太复杂

	return 0;
}