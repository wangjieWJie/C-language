#define _CRT_SECURE_NO_DEPRECATE 1


#include<stdio.h>
int main0()
{
	printf("%d\n", 2 / 4);            //  0
	printf("%d\n", 7 % 2 / 4);        //  0


	double x = 2.5, y = 4.7;
	int a = 7;
	printf("%f\n", x + a % 3 * (int)(x + y) % 2 / 4);         //2.50000


	int i = 5;
	int j = 6;
	printf("%d\n%d\n", i + j, ++j);  //   ?????????   ²»»á

	return 0;
}