#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#define ROW 8

int main3()
{
	for (int i = 1; i <= ROW; i++)
	{
		for (int n = 1; n <= ROW - i; n++)
		{
			printf("  ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("Íõ½Ü");
		}
		printf("\n");
	}
	return 0;
}