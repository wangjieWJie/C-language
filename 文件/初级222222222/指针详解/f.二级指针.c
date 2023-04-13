#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>

int main6()
{
	int a = 10;
	int* pa = &a;  //这就叫一级指针

	int** ppa = &pa;   //这就叫 二级指针      ，后面可以有无限级指针
	*pa = 20;
	printf("%d\n", **ppa);


	
	return 0;
}