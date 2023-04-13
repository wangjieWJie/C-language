#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>


int add(int x, int y)//函数的定义方法，其中add是函数名，，int是函数的返回类型
{
	int z = x + y;        // 这是函数体
	return z;
}

int main()
{
	int sum = 0;
	int shu1 = 0;
	int shu2 = 0;
	printf("这是一个可以算加法的计算机,请输入两个数\n");
	scanf("%d%d",&shu1,&shu2);
	sum = add(shu1, shu2);
	printf("sum=%d",sum);

	return 0;
}