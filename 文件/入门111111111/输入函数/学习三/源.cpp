#include<stdio.h>

int i = 20;//全局变量--定义在代码块（{}）之外的变量

int main1()

{
//C语言语法规定，变量要定义在当前板块最前面
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	{
		int i = 50;//局部变量--定义在代码块内部,当重名时优先局部变量,建议不要相同容易误会，产生bug

		printf("%d", i);

	}

//计算数据

	//输入函数
	scanf("%d%d", &num1,&num2);//取地址符号&
	sum = num1 + num2;
	printf("sum=%d\n",sum);



	return 0;

}