#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
//练习
//1.判断一个数是否为奇数
//2.输出一到一百之间的奇数


int main2()
{
	int go = 1;
	while (go<= 100)
	{
		if (go % 2 == 1)
			printf("%d    ", go);
		go++;
	}

	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");


	int input = 0;
	scanf("%d", &input);
	if (input % 2 == 1)
		printf("%d是奇数\n", input);
	else
		printf("%d是偶数\n", input);


//以上就是我自己做的作业




	//不过有牛？逼的写  i=1. 然后打印,然后再打印 i+=2,就挺投机取巧的
	return 0;
}
