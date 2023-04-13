#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>

int main()
{
	int q = 0;
	//确定打印九行
	for (q = 1; q <= 9; q++)
	{
		int w = 0;
		//确定每一行
		for (w = 1; w <=q; w++)
		{
			printf(" %d*%d=%d", q, w, q * w);
		}
		printf("\n");        //每打印完一行就换行

	}



	return 0;
}