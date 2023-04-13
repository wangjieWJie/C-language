#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>


#include "add.h"            //引用自己写的头文件时要用“”，函数的实现写在源文件add.c里面，函数的声名写在add.h里面，然后用""引进来,注意，一定要加空格
//                          空格  空格 空格空格空格  空格
//1、告诉编译器有一个函数叫什么、 参数是什么、返回类型是什么、但是具体是不是存在，无关紧要。 
//2、函数的声明一般出现在函数的使用之前，要满足新声明后使用。 
//3、函数的声明，一般要放在头文件中的。 
                       //因为只是声明一下，不会真正的在这里使用这个函数，所以我们没必要把x,y也写出来，当然写出来也very good.
int Add(int, int);     //加个分号就是为了声明一下这个函数，函数在后面没事，在前面稍微声明一下就行
                       //当然，这是脱裤子放屁，多此一举。
int main()
{
	int S = 80;
	int B = 89;
	int A = Add(S, B);
	printf("%d\n", A);

	int SS = 14;
	int BB = 96;
	int AA = Add(SS, BB);
	printf("用声名的函数算出来的%d\n", AA);
	return 0;

}



int Add(int x, int y)
{
	int nm = x + y;
	return nm;

}

//不知道为什么为什么我只有文件后缀是.cpp才行， .c就呱呱报错
//好像是这个文件的事，好像不是函数放在后面的问题
//真他妈BUG啊，一阵阵的吃屎，咱也知不道哪错了