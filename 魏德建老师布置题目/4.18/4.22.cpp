#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<iostream>


int WeiShu(int a)
{
	int b{};
	int y = 1;
	
	if (y)
	{
		b++;
		y = a/10;
		if (y)
		{
			b++;
			y = a / 100;
			if (y)
			{
				b++;
				y = a / 1000;
				if (y)
				{
					b++;
				}
			}
		}
	}
	return b;
}



int main22()
{
	char s = 'c';
	if ('A' <= s && s <= 'Z')         //C语言中没有连续不等式                                   
	{
		printf("我是对的！！！\n");
	}

	if('Z' >= s >= 'A') {

		printf("我是错的！！！\n");
	}



	switch (s++)
	{
	case 'a':
		//int asf{};
	case 'A':

	case 'b':
	case 'B':
		printf("good\n");
		break;
	case 'c':
		printf("pass\n");            //这样没有 break 会使得下面的可执行代码全部执行
	case 'C':
	case 'd':
		printf("waring\n");       
	case 'D':
	default:
		break;
	}


	int m = 16;
	int n = 21;
	int k = 0;
	switch (m % 3)
	{
		case 0:
			k++;
			break;
		case 1:
			k++;
			switch (n % 2)
			{
			default:
				k++;

			case 0:
				k++; 
				printf("我也不知道为啥连我也运行上了\n");
				break;

			}
	}
	printf("swtich这个的结果  %d\n", k);





	int a = 3;
	int b = -1;
	int c = 1;
	if (a < b)
		if (b > 0)
			c = 0;
		else
			c++;
	printf("这个if语句  %d\n", c); 







	/*printf("成绩：");
	int x, y;
	scanf("%d", &x);
	y = x / 10;
	switch (y)
	{
		case 10:printf("A"); break;
		case 9:printf("B"); break;
		case 8:printf("C"); break;
		case 7:printf("D"); break;
		case 6:printf("E"); break;
		default:printf("F"); break;
	}*/





		printf("x值：");
		float x{};
		float y{};
		scanf("%f", &x);
			if (x > 0 && x != 2)
			{
				y = (x + 1) / (x - 2);
			}
			else if (x == 0 || x == 2)
			{
				y = 0;
			}
			else if (x < 0)
			{
				y = (x - 1) / (x - 2);
			}
					
		
		printf("%f\n", y);


		int ws = WeiShu(0);
		printf("%d\n", ws);


		
	return 0;
}