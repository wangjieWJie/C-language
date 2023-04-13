#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>

int main()
{
	int n = 1;
	int m = 2;

	switch (n)
	{
	case 1:
		m++;    //m=3
	case 2:
		n++;    //n=2
	case 3:
		switch  (n)  //switch 可以镶嵌使用
		{case 1:
			n++;    //
		case 2:
			m++;
			n++;    //m=4  n=3
			break;
		}
	case 4:
		m++;    //m=5			全程没有一个break，所以能加的都加上
		break;
	default:
		break;
	}

	printf("m = %d,n = %d\n" ,m, n);





	return 0;
}