#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>

//咱再写一个阶乘的程序啊

int Fac1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;      //这个星乘是真牛逼，直接爱了
	}
	return ret;
}

int Fac2(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac2(n - 1);
}




int main4()
{
	int nn = 0;
	int ret = 0;
	scanf("%d", &nn);

	ret = Fac1(nn);
	printf("用循环的方式做出来的%d\n", ret);

	ret = Fac2(nn);
	printf("用递归的方法%d\n", ret);

	return 0;
}