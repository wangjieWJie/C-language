#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
//老师说 is_prime (是 素数)听起来牛逼，所以规定这个

int is_prime(int x)
{
	int back_num = 1;
	switch (x%2)
	{
	case 0:
		back_num = 0;
	default:
		switch (x%3)
		{
		case 0:
			back_num = 0;
		default:
			switch (x%5)
			{
			case 0:
				back_num = 0;
			default:
				switch (x%7)
				{
				case 0:
					back_num = 0;
				default:
					break;
				}
				break;
			}
			break;
		}
		break;
	}
	
	return back_num;
}

//好吧,我自己写的确实有点菜，其实不嵌套也可以，但我就是想试一试
//唉，看看鹏哥写的吧
//鹏哥求素数

int is_peng(int n)
{
	int peng = 0;
	for (peng = 2; peng <=sqrt(n); peng++)           //他后来优化了一下，这是优化前的       for (peng = 2; peng < n; peng++)
	{                                                //sqrt() 用来求给定值的平方根,,sqrt()函数的返回值是 double型。
		if (n % peng == 0)
			return 0;          //遇见这个，函数直接结束
	}
	return 1;
}


int main3()
{
	//打印0~200之间的素数
	int first = 0;
	printf("这是我的素数\n");
	for (first = 0; first <= 200; first++)
	{
		if (is_prime(first) == 1)
		{
			printf("%d  、 ", first);
		}
	}
	printf("这是鹏哥的素数：\n");

	for (first = 0; first <= 200; first++)
	{
		if (is_peng(first) == 1)
		{
			printf("%d  、 ", first);
		}
	}

	printf("我真的是太失败了，竟然没有十以内的数\n");





	return 0;
}