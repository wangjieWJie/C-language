#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
int main0()
{
	//自己定义的变量名不能和任何关键字冲突、重名
//  auto  break  case char const continue default do double else enum
//  extern float for goto if long register return short signed
//  sizeof static struct switch typeadef union unsigned viod volatile while 


	//auto  自动
	int a = 10;//局部变量，自动变量，他自动产生，自动销毁，前面省略了一个auto (因为局部变量都是自动变量，所以把auto 都省略了),如果不省略，就如下(好吧不行)
	//auto int b = 20; 为什么有问题
	//用vs2010运行，出现错误提示："auto”不能与任何其他类型说明符组合，因为新版C++定义auto不能和任何类型进行组合，
	//直接写作auto b=2,就表示把b自动转换成整型,即auto根据后面的值自动把该变量转换成相应的类型，
	//或者不用auto，直接写作int b=2,系统会自动默认为自动变量。

	auto b = 20;

	//const 常变量
	//defaut 默认
    //du while 循环
	//enum 枚举
	//extern 引入外部符号
	//register 寄存器关键字   建议在寄存器里申请一个空间，能更快的访问，，建议是因为一个带计算机只有十几个寄存器，一个寄存器才2kb.
	//例如
	register int jj = 10;   //如果jj要不断被使用，register能提高执行速度,


	//int 定义的变量是有符号的
	//正式的写作 signed int 表示有符号的整型
	//此外 unsigned 表示没有符号的整型，即：没有符号位，写入啥数都是整数

	//struct 结构体关键字
	//viod 无 空
	//typedef 类型定义
	//static   修改作用域和生命周期
	// extern  生命外部符号
	//define  (define不是一个关键字他是一个指令)定义常量和宏
	//



	


	//
	//
	//


	return 0;
}