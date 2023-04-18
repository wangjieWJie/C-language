#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

int main()
{
	int a[3][4] = { 3,2,1,3,2,1,3,2,1 };
	int j, k, p = 1;
	for (j = 0; j < 2; j++)
	{
		for (k = j; k < 4; k++)
			p *= a[j][k];
	}
	printf(" % d\n", p);


	int i;
	int x[3][3] = { 1,2,3,4,5,6,7,8,9 };
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", x[i][1] - 1);            //结果是 1 4 7         ？？？？？  ，为啥   因为我是个傻逼，连这个都看不明白，从零开始，1是第二个
	}
	return 0;
}