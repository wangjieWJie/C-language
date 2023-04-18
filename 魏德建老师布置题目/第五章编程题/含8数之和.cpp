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
	int tep;
	int retu = 0;
	for (sta; sta <= end; sta++)
	{
		int WS = weishu(sta);
		for (WS; WS > 0; WS--)
		{
			tep = sta % 10;
			if (8 == tep)
			{
				retu = sta + retu;
			}
		}
	}
	return retu;
}



int main1()
{
	int result = ADD_NUM_8(1, 2000);
	printf("所定范围内所有带8的数字之和为 ：%d\n", result);

	return 0;
}