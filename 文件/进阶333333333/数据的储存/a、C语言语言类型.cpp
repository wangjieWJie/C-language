#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

/*C语言类型
* 1、内置类型
*	char short long int float double
* 2、自定义类型（构造类型）                   //写这个其实就是想说 "自定义类型"也叫"构造类型" 。(doge)
*	数组类型
*	结构体类型  struct
*	枚举类型    enum
*	联合类型    union
 3、指针类型
	int*  char*  float*  viod*                
 4、空类型
	viod 表示空类型（无类型）
	通常用于函数的返回类型、函数的参数、指针类型。

*/



int main1()
{
	//char 实际上是个整型，它储存的是 字符的 ASCLL 码值。
	unsigned char;   // 储存 0—255
	signed char;     // 储存 -128—127
	//因为他们的字节大小是一样的，都是8字节  00000000   ，有符号的最高位就是符号位了，所以正数少一半

	//long[int] a;                  //现在不大懂，这个会报错  ： E0254 不允许使用类型名
	long int;
	short int;
	unsigned short int;
	//这些东西的int都是可以省略的，（【】里面的东西就是可以省略掉的）
	short;
	long;
	//和上面的是一样的



	return 0;
}