#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c;
	//c = (a += a + 2),(a = b, b + 3);

	c = (1 + 1), (3, 4);
	printf("a %%d b %%d c%%d\n", a, b, c); 




	return 0;
}