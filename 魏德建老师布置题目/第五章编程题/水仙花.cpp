#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
int main000()
{
	int a = 0;
	int b = 0;
	int c = 0;
	for (int i = 100; i <= 999; i++)
	{
		a = i % 10;
		b = (i % 100) / 10;
		c = i / 100;
		if (i == a * a * a + b * b * b + c * c * c)
		{
			printf(" %d  ", i);

		}
	}

	return 0;
}