#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>
#include<string.h>


//for(表达式1;表达式2;表达式3)
//    循环语句:
//
//表达式1  为初始化部分
//表达式2  为条件判断部分，用于判断循环什么时候终止
//表达式3  为调整部分，用于循环条件的调整

int main1() {

//使用for循环在屏幕上写一到一百的数字,去除了66

	int i = 0;
	for (i = 1; i <= 1111100; i++)     //初始化、判断、调整
	{
		if (i == 101)
			break;
		if (i == 66)
			continue;         //不会进入死循环，因为i++一定是最后执行的，限制性表达式一二，再执行循环体里的语句，最后执行i++。。。。
		printf("%d\n", i);
	}


	//1、不可在for循环体内改变变量，防止for循环失去控制（死循环哈，很容易理解。
	//2、建议for语句的循环控制变量的值采取“前闭后开区间”写法

	//前闭后开区间
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int a = 0;
	for (a = 0; a < 10; a++)      //两边都是闭区间，中间a<10是开区间，因为这样方便阅读，一看就知道是10次循环，10个变化，10个元素，不建议出现a<=9的写法，因为不直观
	{
		printf("%d\n", arr[a]);
	}





//for循环的变种
 
// 
	// 变种1
		//for(;;)							  //for循环的初始化、判断、调整都可以省略。
		//{
		//	printf("change111\n");       //但是： for循环的判断部分若是被省略了，那判断条件就是：恒为真   于是死循环
		//}                                  //如果不是非常熟练建议不要省略


	//变种2
		int x,y;
		for(x=0, y=0; x<2 && y<5; ++x , ++y)
		{
			printf("chenge222\n");
		}
		
	return 0;
}