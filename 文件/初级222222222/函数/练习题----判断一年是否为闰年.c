#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
//闰年就是，此年是四的倍数，但不是100的倍数，此年就叫普通闰年，若是400的倍数则称之为世纪闰年




int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//函数在设计时，功能要单一，要干净。可复用性要高。


int main4()
{
	int year = 0;

	for (year = 1000; year <= 2050; year++)
	{
		//判断year是否为让闰年
		if(1==is_leap_year(year))
		{
			printf("%d  ",year);
		}

	}



	return 0;
}

