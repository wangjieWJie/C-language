#define _CRT_SECURE_NO_DEPRECATE 1
#include"head.h"


void WJNB(int i)
{
	//int K = ROW / 2 - i / 2 ;
	//int a = K;
	//int ROW = 51;

	int Xing = i * 2 - 1;
	int K = (ROW - Xing) / 2;
	int a = K;
	for (; K > 0; K--)
	{
		printf(" ");
	}
	for (; Xing > 0; Xing--)
	{
		printf("*");
	}
	for ( ;a > 0; a--)
	{
		printf(" ");
	}
	printf("\n");
}