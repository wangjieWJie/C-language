#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>


int main()
{
	int age = 1;
	scanf("%d", &age);
//  一
	if (age < 18)
		printf("未成年\n");
	else if (age >= 120 && age < 9999)
		printf("外星人\n");
	else if (age >= 9999)
		printf("脱水三体人\n");
	else
		printf("成年\n");
//二
	if (age < 18)
		printf("未成年\n");
	else
	{
		if (age >= 120 && age < 9999)
			printf("外星人\n");
		else if (age >= 9999)
			printf("脱水三体人\n");
		else
			printf("成年\n");
	}
//三
	if (age < 18)
	{                              //代码块
		printf("未成年\n");
		printf("不能谈恋爱");
		printf("不能打游戏");
	}
	else if (age >= 120 && age < 9999)
		printf("外星人\n");
	else if (age >= 9999)
		printf("脱水三体人\n");
	else
		printf("成年\n");


//和python一样，C语言的if语句遵循就近原则
	int a = 0;
	int b = 2;

	//一
	if (a == 1)
		if (b == 2)
			printf("进来了\n");
	else
		printf("没进来");

		//二
		if (a == 1)
			if (b == 2)
				printf("进来了\n");
			else
				printf("没进来");

			       //他们的效果是一摸一样的，因为就近原则，所以从一开始就没进去，故啥都打印不出来

		//改正
		if (a == 1)
		{
			if (b == 2)
				printf("进来了\n");
		}
			else
				printf("没进来");




//if语句的书写格式
//// 
//	//不好
//		if(a==0){
//			return 66;
//		}
//		return 55;         //他的意思其实也是 如果是，那么66。。。如果不是，那么55.。。。。但容易被误解（被骂）。。。。。
//
//
//	//漂亮的写法
//		if(a==0)
//		{
//			return 66;
//		}
//		else
//		{
//			return 55;
//		}
//
//
//
//
		int num = 4;

    //不好
		if (num=5)                                   //一个等号，很容易没看见，就出了一个很难找的BUG
		{
			printf("嘿嘿，他就是等于5\n");
		}

	//好的写法
		if (5 == num)
		{
			printf("hehe\n");                     //此时少数入等号就要报错了，，想错都错不了，，形式更优
		}








	return 0;
}