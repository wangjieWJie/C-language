#include<stdio.h>

int main1()
{
	int x = 4;
	int y = 2;
	int z = 0;
	printf("(x-y<=y)||(y=z)=%d\n", (x - y <= y) || (y = z));
	printf("y=z=%d\n", y = z);


	if (x = y + z) printf("***\n");
	else printf("$$$\n");


	int s = 15;
	switch (s/4)
	{
	case 1:
		printf("one\n");
	case 2:
		printf("two\n");
	case 3:
		printf("three\n");
	default:
		printf("over\n");                //结果是  therr over ？？？？？为什么
		break;
	}


	return 0;
}