#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>


int hann(int n)
{
	int ZZA[64] = { 0 };          //因为我还不会弄动态数组，没法让变量N当作数组的大小，所以只能用个64来弥补这点，所以这个程序只能算64及以下的个数的汉诺塔
	for (int M = n; M >= 0; M--)
	{
		ZZA[M] = M;
	}

	int ZZB[64] = {};
	int ZZC[64] = {};


}


int main()
{
	int N = 1;
	scanf("%d", &N);
	
	int bushu = hann(N);





	return 0;
}