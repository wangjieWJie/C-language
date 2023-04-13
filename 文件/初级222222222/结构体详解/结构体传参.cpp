#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>


typedef struct stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;   

void STRUCT_print1(stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age :%d\n", tmp.age);
	printf("Tele:%s\n", tmp.tele);
	printf("Sex :%s\n", tmp.sex);
}

void STRUCT_print2(stu* ps) {

	printf("name:%s\n", ps->name);
	printf("age :%d\n", ps->age);
	printf("Tele:%s\n", ps->tele);
	printf("Sex :%s\n", ps->sex);
}


int main()
{
	stu s = { "李四",40,"18860527968","男"};

	STRUCT_print1(s);

	printf("\n\n\n\n");

	STRUCT_print2(&s);       //因为这个不用创建新的结构体(不用开辟新的空间)所以这个更好，效率高速率快。
	                         //一个指针才占用4个字节（64位平台）
							
	//总结：函数传参的时候，参数是要压栈的。如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降
	                              //压栈：
	//结论 ： 结构体传参的时候，要传结构体的地址

	//栈区，堆区，静态区

	/*栈区
	       局部变量
		   函数的形式参数
		   函数调用也开辟空间
	  堆区
	       动态内存分配
		   malloc/free
		   realloc
		   calloc 
	  静态区
	       全局变量
		   静态变量
		   */


	/*数据结构
	          线性数据结构
			               顺序表        连续存放一行数
						   链表          把散乱的数据联系起来
						   栈            把一个数据存储到栈的操作叫做（压栈），栈的特点是上进上出。
						                 所以每存一个数据栈顶都是变化的，想要删除一个数据（出栈）都要从栈顶上开始删除  先进的后出，后进的先出（这是他的数据结构）
						   队列
			  树形数据结构
			               二叉树
			  图
			
	*/                                  // 详情请搜索关键字  <函数栈帧的创建和销毁>

//完结撒花


	return 0;
}