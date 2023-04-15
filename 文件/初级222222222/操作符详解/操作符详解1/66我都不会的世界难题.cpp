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
	printf("%d\n%d\n", i + j, ++j);  //   ?????????   不会                输出项目从右向左以运算，自左往右输出


	//% 2f是把float的所有位数输出2位, 包括小数点, 如果不组2位, 补0, 如果超过2位, 按照实际输出
		//% .2f是float后的小数只输出两位。

	return 0;
}