#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
  


//
//
//
//
//                 局部变量     使其生命周期变长，成为一个静态的局部变量，类似于全局变量，能在大括号外不灭
//
//static   修饰    全局变量
//
//                  函数 
//


extern void test();
extern void test_success();

int main4()
{
	 int i = 0;
	 int sta = 0;
	

	while (i < 5)
	{
		
		test();
		i++;

	}

	//这是有static的函数test_success

	while (sta < 5)
	{

		test_success();
		sta++;

	}


	return 0;
}