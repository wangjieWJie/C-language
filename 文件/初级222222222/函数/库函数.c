#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main1()
{

//常见库函数
	//IO函数
	//字符串操作函数
	//字符操作函数
	//内存操作函数
	//时间/日期函数
	//数学函数
	//其他库函数




//strcpy----------------string copy
	char arr1[] = "wangjie";
	char arr2[20] = "#############";      //不加20的话，他字符个数可能不够，有点BUG。。 
	strcpy(arr2, arr1);         //把arr1的字符拷贝进入arr2里,同时连  \0  一起拷贝过去。copy完arr2里就是wangjie\0#####  ,但因为\0是字符串结束的标志，所以到\0printf就停止了    

	printf("%s\n", arr1);




//memset--------------memory set  内存设置
	char arr3[] = "holle,world";
	memset(arr3,'*',5);                //就是把arr3里的字符替换成 * ，总共替换五个
	printf("%s\n", arr3);

	memset(arr3, '#', 11);            //如果要替换的字符数比数组大小还要大的话，就会产生一个BUG，所以一定要好好关注，避免溢出
	printf("%s\n", arr3);








	return 0;
}




