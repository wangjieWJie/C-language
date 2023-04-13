#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h> 

int main2()
{



	int En = getchar();

	putchar(En);   //和printf加%c是一样的
	printf("\n%c\n", En);


	int ch = 0;

	while ((ch = getchar())!= EOF);    //end of file 文件结尾,它的值是-1       ctrl+z即可得到一个EOF
	{
		putchar(ch);        
	}



	return 0;
}