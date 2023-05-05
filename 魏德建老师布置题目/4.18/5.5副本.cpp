#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
int main()
{
	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int b[3][3] = { 0 };
	int i = 0;
	int j = 0;
	printf("array a:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%5d", a[i][j]);
			b[j][i] = a[i][j];
		}
		printf("\n");
	}
	printf("array b:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%5d", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}