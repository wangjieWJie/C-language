#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

//  &   按位与                 
//  |   按位或                 他们按的都是二进制位
//  ^   按位异或
//                  注：他们的操作数必须是整数
//                  注：只看真实最少的用到的位，其余位都认为是0，要是按位与 1 的话，就只看 最右边的1位！因为1只占一位，短板效应就跟着1走，结果要么是1要么是0；
                                       //a = 1;
                                       //b = 14;
                                       //c = a & b;
                                       //结果是 c = 0

int main3()
{
// &  按位与

	int a = 3;
	int b = 5;
	int c = a & b;
	printf("按位与 c=%d\n", c);

	//为了省事，32个bit位，咱们能省就省
	// 3： 0011
	// 5:  0101                相同为1，不同为0,    （只看真实最少的用到的位，其余位都认为是0，要是按位与 1 的话，就只看 最右边的1位！因为1只占一位，短板效应就跟着1走）
	// c:  0001      = 1
	//         因为数字在内存中都是 以补码形式存在，所有遇到负数时一定要换成补码再运算



// | 按位或

	c = a | b;
	printf("按位或 c=%d\n", c);
	// 3： 0011
	// 5:  0101                只要有一个为1，就为1.两个同时为0，才为0
	// c:  0111      = 7                                                            2^2+2^1+2^1=7



// ^ 按位异或

	c = a ^ b;
	printf("按位或 c=%d\n", c);
	// 3： 0011
	// 5:  0101                相同为0，相异为1
	// c:  0110      = 6                                                            2^2+2^1=6




//一道变态的面试题
	 //在不创建临时变量（第三个变量）的前提下，实现两个数的交换

	a = 3;
	b = 5;
	
	//加减法
	a = a + b;
	b = a - b;
	a = a - b;                               
	printf("交换后：a=%d，b=%d\n", a, b);       //有一定限制，比如有两个接近 int 类型的最大值的数 ，相加就大于整形的最大值了，就会导致二进制位的丢失（溢出），答案就出错了
	            
	//异或的方法

	// a  011
	// b  101
	a = a ^ b; //  110 
	b = a ^ b; //  011                反身性
	a = a ^ b; //  101
	   //因为这种解法不会产生进位，所以没有限制
	   //但是这种代码执行力不高，可读性也很差，所以未来不会用到








	return 0;
}


