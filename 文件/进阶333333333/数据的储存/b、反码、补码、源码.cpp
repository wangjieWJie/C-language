#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

int main()
{
	//无符号（和正数）数原码、补码、反码相同           0是正数
	
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("char  %d\nsigned  %d\nunsigned  %d\n", a, b, c);         //-1  -1  255
	/*
	-1的原反补码
	1000000000000000000000000000000000000001
	1111111111111111111111111111111111111110
	1111111111111111111111111111111111111111        -1的补码全是1 ，这个可以当成一个知识点去记的
	
	
	
	0:35:33
	*/
	


	return 0;
}