#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

//描述一个学生，一些数据
//姓名
//年龄
//电话
//性别

//struct - 结构体关键字    stu - 结构体标签    struct stu--结构体类型    
struct stu
{
	//成员变量                        ，结构体成员可以是 标量、数组，甚至是其他结构体。
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1,s2,s3;     //这是三个全局的结构体变量




//结构体的重命名
typedef struct BBC         //typedef 给    起小名的作用，起完名之后，原来的名字还可以用
{
	char job[20];
	int money;
}BBC;

//从此这个结构体既可以叫做 struct BBC ，又叫做 BBC


//包含其他结构体的结构体
struct s
{
	int a;
	char b;
	char ch[10];
	double c;
};

struct big
{
	char en[20];
	struct s ss1;     //本质上也是创建了一个结构体变量
	char* pc;
};


int main1()
{
	struct stu s4;   //这是结构体（struct stu）变量创建的过程

	struct BBC s5;
	BBC s6;          //起的小名和原来的名字同等效果

//结构体变量的初始化
	struct stu s7 = { "张三",18,"15605438760" ,"女" };  


//嵌套结构体的初始化
	char arr[] = "SBNB";
	struct big t = { "hehe",{2,'5',"0",0.250},arr};         //迷惑二十分钟，单字符要用'单引号'，字符串要用"双引号"  ,着重强调 '5' 


	printf("%s\n", t.ss1.ch);  // 打印 0
	printf("%s\n", t.pc);      //打印 SBNB
	printf("%c\n", t.ss1.b);      //打印 SBNB
	printf("%d %c %s %f\n", t.ss1.a, t.ss1.b, t.ss1.ch, t.ss1.c);      //迷糊二十分钟，单字符要用 c ,字符串要用 s

	return 0;
}