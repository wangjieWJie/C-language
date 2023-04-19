#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>                  

// 22生医一班 王杰 2022121144


// 计算所有带8的数的和 

int weishu(int a)                   //用于计算某个数有几位的函数
{
	int n = 0;
	while (a > 0)
	{
		a /= 10;
		n++;
	}
	return n;
}
int ADD_NUM_8(int sta, int end)       //用于把数里带8的数加起来的函数
{
	int tep = 0;
	int retu = 0;
	int nigao = 0;
	int fule = 0;
	int retur = 0;

	for (sta; sta <= end; sta++)
	{
		int WS = weishu(sta);
		nigao = sta;
		for (WS; WS > 0; WS--)
		{

			fule = nigao % 10;
			nigao /= 10;
			tep = nigao % 10;
			if (8 == nigao || 8 == tep || 8 == fule )
			{
				retu = 6;
			}
		}
		if (6 == retu)
		{
			printf("%d  ", sta);

			retur = sta + retur;
		}
			retu = 0;
	}
	return retur;
}



int main1()
{
	long result = ADD_NUM_8(1, 2000);
	printf("\n%d——%d之间所有带8的数字之和为 ：%d\n", 1,2000,result);

	return 0;
}