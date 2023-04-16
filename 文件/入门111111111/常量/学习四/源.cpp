#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#define WJ 666
//从此WJ在整个工程中都是666,,define定义的标识符常量
enum day
{
	one,
	tow,
	there,
	foul,
	five,
	six,
	seven,
};


int main()
{
//const-常属性，修饰后的东西是变量但是又有常属性，所以称为常变量
//如const int i=20;    从此i不再变

printf("%d\n",WJ);

//枚举常量
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

printf("%d\n", MALE);//0  默认且不能改 
printf("%d\n", FEMALE);//1
printf("%d\n", SECRET);//2
{
	enum day DAY = six;
}   




return 0;
}