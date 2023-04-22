#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main2()
{
	int a = 100;
	int b = 0;
	int c = 0;
	int d = 0;
	for (a = 100; a <= 999; a++)
	{
		b = a / 100;           /*百位数*/
		c = a / 10 % 10;         /*十位数*/
		d = a % 10;         /*个位数*/
		if (a == b * b * b + c * c * c + d * d * d)
		{
			printf("我叫  %d\n", a);
		}
	}
	return 0;

}