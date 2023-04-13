#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>


					//数组是一类相同类型元素的集合。

int main1() {



//一、数组的创建方式
	//type-t arr_name[const_n];    类型  数组名[常数]
	//type-t   是指数组的元素类型
	//const_n  是一个常量表达式，用来指定数组大小。
	  
	  
	//数组名是一个首元素地址
	//const_n  不能是变量，只能是常量，所以不可以是  int a=10；  里的 a 。    [a]不行

	//具体例子不再细举



	//如
	int pdd[20] = { 1,2.3,4 };        //叫做不完全初始化，剩下的元素默认初始化是0
	char pdd1[5] = { 'a','b' ,67};       //这个和上面那个一样，剩余的初始化为0  ， 这个地方写67就表示C了，跟据ASCLL码表，67就是C
	char pdd2[5] = "ab";             //这个在 a、b 后面是 \0 表示结束，但\0也是0，所以结果和上面那一个是一样的。由来不一样。
	char pdd4[] = "abcdef";          //注意：双引号之中：加上 \0 这个数组总共有7个元素，，（而大括号就没有\0这个东西）
	             //详细情况请用调试、监控自行查看。很重要
	
	printf("%d\n", sizeof(pdd4));     //输出7            计算所占空间大小，7个元素---char 7*1=7
	printf("%d\n", strlen(pdd4));     //输出6            计算字符串长度，计算到 \0 就停止，计算的是\0之前的字符个数 
	               //1、其实 sizeof 和 strlen 没有什么关联
	               //2、sizeof 计算变量、数组、类型的大小---单位是字节---操作符
	               //3、strlen 是求字符串长度的---只针对字符串求长度---库函数---使用得引头文件



	char arr1[] = "abcd";
	char arr2[] = { 'a','b','c','d' };
	printf("sizeof(arr1):%d\n", sizeof(arr1));  //5
	printf("sizeof(arr2):%d\n", sizeof(arr2));  //4
	printf("strlen(arr1):%d\n", strlen(arr1));  //4
	printf("strlen(arr2):%d\n", strlen(arr2));  //随机      ，strlen找不到\0了，而且他又是不限定大小的数组，










	return 0;
}