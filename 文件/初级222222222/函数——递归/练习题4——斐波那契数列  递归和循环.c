#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>


//斐波那契数列，因为我发烧回家还是什么来着，没听见杨会娟讲这个，不过这好像是 不死神兔 问题。(自然界的繁殖问题)
//1 1 2 3 5 8 13 21 34
//数学课本封面上的海螺壳纹，就是前两个数之和等于下一个数。

int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}


//既然递归的方法太过于费劲，那么咱们就不要用递归了


//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
//a b c 
//就用三个变量，来一步一步挪到最后

//int a=1;
//int b=1;
//int c=00;

//c=a+b;  c的第一个值是 a+b 加出来的 ，以后他也从来不会做一个量用来做加法，她只是一个不断变化的过渡量
//a=b;    从这里，a向后挪了一步，挪到了b曾经在的地方
//b=c;    从这里，b向后挪了一步，挪到了c曾经在的地方
//        然后 c 被重新赋值，暂时储存着，伺机赋给b,然后就不断循环，两块砖过泥地


int FID(int n)
{
	//以下是我根据以上理论自己琢磨出来的

	int a = 1;
	int b = 1;
	int c = 0;
	if (0==n)
		return 0;

	if (n>=1&n<=2)
		return 1;
	
	if(n>=3)
	{
		for ( n; n-2>0; n--)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}


}
//
//以下是鹏哥的解法

int fid(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;


	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;           //这个 n-- 这让他玩的是真明白
	}
	return c;
	//
	//根本不需要写if好吧，因为这里c本来就是1；直接解决了第一个和第二个。。。。6
}







int main5()
{
	int ff = 0;
	scanf(" %d", &ff);

	long retu = Fib(ff);
	printf("递归解法：第%d个斐波那契数是%d\n", ff, retu);          //这个办法太费电脑了，算第50个，算了一分钟，算出了个-298632893(位数太多，我不会弄)
	
	retu = FID(ff);
	printf("我的循环：第%d个斐波那契数是%d\n", ff, retu);    

	retu = fid(ff);
	printf("鹏哥循环：第%d个斐波那契数是%d\n", ff, retu);
	return 0;
}


//递归和循环要因时而用，

//比如递归写出来简单但是他可能有一个明显的缺陷-----栈溢出