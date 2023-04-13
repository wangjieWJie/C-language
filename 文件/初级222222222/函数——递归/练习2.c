#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>

//编写函数，不允许创建临时变量，求字符串长度

//先用一个随便的方法解决这个问题（这个办法违背了题目意思，我们创建了一个临时变量）
int my_strlen(char* str)
{
	int count = 0;             //姑且把count翻译为计数器
	while(*str != '\0')
	{
		count++;
		str++;                 //刚开始的str表示str[0]  ,加一表示str[1],          str表示w的地址，+1表示j的地址
	}
	return count;
}

//再用一个 递归 的方法解决这个问题(把大事化小)
int dg_strlen(char* str)
{
	if (*str != '\0')
		return 1 + dg_strlen(str + 1);  //从内向外，依次。。。。。
	else
		return 0;
	
}


int main3()
{
	char arr[] = "wj come on";

	printf("用临时变量算出来的，%d\n", my_strlen(arr));
	printf("用递归算出来的，%d\n", dg_strlen(arr));

	return 0;
}