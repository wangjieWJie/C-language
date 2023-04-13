#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>
#include<string.h> 

int main()
{
	char mima[20] = { 0 };
	int huida = 0;
	int ch = 0;

	printf("请输入密码>>>");
	scanf("%s", mima);
	while ((ch = getchar())!='\n')        //因为不论你输入123456\n,还是123456 ASFgfasg\n,,你最后总是要输入一个回车，所以当while 检测到了回车才能下一步
	{
		;
	}
		printf("请确认（Y/N）>>>");
		huida = getchar();

		if (huida  == 'Y') 
		{
			printf("确认成功");
		}
		else
		{
			printf("放弃确认");
		}


		int Z = 0;
		while ((Z = getchar() )!= EOF)    //他的作用是运行起来后可以通过ctrl+z来结束运行，不然永远结束不了
		{
			if(Z<'0'||Z>'9')       //   || 的意思是或者。整个语句的意思就是如果输入的字符在ASCII码表中的位置在0之前或9之后（即，不等于0~9的所有数）就会从头重新循环。
				continue;
			putchar(Z);
		}



	return 0;
}
