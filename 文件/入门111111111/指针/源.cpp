#define _CRT_SECURE_NO_DEPRECATE 1
#include<string.h>
#include<stdio.h>
                               //   point   
int main() {

	int a = 3512232;
	printf("a的地址是：%p\n", &a);

	int* dizhi = &a;                         //  int *p = &a ;    int* p
	printf("%p\n", dizhi);

	*dizhi = 20;
	printf("%d\n", a);
	

	char Englishi = 'WJNB';
	printf("%p\n", &Englishi);

	char* zidizhi = &Englishi; 
	printf("%c\n", Englishi);
	printf("%c\n", *zidizhi);

	*zidizhi = 'real';
	printf("%c\n", Englishi);
	printf("%d\n", sizeof(Englishi));

	//看指针变量的大小
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));





	return 0;
}


