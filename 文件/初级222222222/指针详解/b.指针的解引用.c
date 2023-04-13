#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>


int main2()
{
	int arr[10] = { 0 };
	int* p = arr;      //arr :首元素的地址
	int i = 0;
	for (i = 0; i < 10; i++) {

		*(p + i) = 1;
	}
	//以上代码表示将arr里的十个元素改成 1  ；可以监视一下看看

	char* pc = arr;
	for (i = 0; i < 10; i++) {

		*(pc + i) = 1;
	}
	//char这样写就不行了，因为他只向后跳了十个字节，但是我们的数组里有四十个字节，所以他只能改三个元素



	return 0;
}