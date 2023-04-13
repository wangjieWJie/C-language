#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

//  []       下标引用操作符
//  ()       函数调用操作符
//   .       结构体.成员
//  ->       结构体指针操作符


struct student
{
	char name[20];
	int age;                 // 画图纸
	char id[20];
};


int main10()
{

//  []   下标引用操作符
//       操作数：一个数组名 + 一个索引值
	
	int arr[10];     // 创建数组   
	arr[9] = 10;     // 实用下标引用操作符
	//  [ ] 的两个操作数是arr和9




//  ()   函数调用操作符
//       接受一个或多个操作数：第一个操作数就是函数名，剩余的操作数就是传递给函数的参数。



//使用 struct student 这个类型创建了一个学生对象 s1 ,并初始化  （盖房子）
	struct student s1 = { "张三",20,"2022126666" };

	printf("%s\n", s1.name);
	printf("%d\n", s1.age);        //结构体变量.成员名
	printf("%s\n", s1.id);

	struct student* ps = &s1;

	printf("%s\n", (*ps).name);
	printf("%d\n", (*ps).age);
	printf("%s\n", (*ps).id);

//->->->->->->->->->->->- 
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%s\n", ps->id);


	return 0;
}