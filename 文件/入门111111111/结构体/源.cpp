#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h> 
#include<string.h>
//复杂对象·结构体·我们自己创造出来的类型

//创造一个结构体类型
struct book
{
	char name[20];
	short price;

};                    //注意分号不可缺少

int main()
{
	struct book A1 = { "一千零一个为什么",19.9 };

	printf("书名：%s\n",A1.name );
	printf("价钱：%d\n", A1.price);

	A1.price = 29;
	printf("双十一特价：%d\n", A1.price);
	
	
	//与之对应的指针类型是 struct book*
	struct book* dizhi = &A1;
	printf("%s\n", (*dizhi).name);
	printf("%d\n", (*dizhi).price);

//    . 是一个操作符，用来指出结构体成员
//    .   用法  操作体变量.成员

	//与之作用相似的还有   —>

	printf("%d\n", dizhi->price);

//  ->是一个操作符，用来。。。。。
//用法  结构体变量->成员

//附  因为C语言没有字符串变量，所以给此书改名要用strcpy函数,他在sring.h里，要引用头文件

	strcpy(A1.name, "此书已售罄");
	printf("书名：%s\n", A1.name);
	printf("%s\n", (*dizhi).name);

	//strcpy-string-字符串拷贝（string.h）


	return 0;
}