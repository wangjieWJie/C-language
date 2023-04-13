#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void new_line()
{
	printf("SB\n");
}

void three_line()
{
	int d = 0;
	for (d = 0; d < 3; d++)
	{
		new_line();
	}
}


int main8()
{
	three_line();
	printf("%d", printf("%d", printf("%d", 43)));     //pirntf的返回值类型确实是 int 但他它的返回值是打印的字符的个数

	return 0;
}


