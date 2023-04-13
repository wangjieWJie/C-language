#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

void test()
{
	int te = 1;
	te++;
	printf("%d\n", te);

}

void test_success()
{
	static int st = 1;
	st++;
	printf("%d\n", st);

}



int daxiao(int da,int xiao) {

	if (da > xiao)
		return da;
	else
		return xiao;

}