#define _CRT_SECURE_NO_DEPRECATE 1

//C语言中提供了可以随意滥用的goto语句和标记跳转的标号。 
//从理论上goto语句是没有必要的。实践中没有goto语句也可以很容易的写出代码。 
//但某些场合下gpto语句还是用得着的。最常见的用法就是终止程序。 在某些深度镶嵌的结构的处理过程，例如，一次跳出两层或多层循环。 
//这种情况使用Break是达不到目的的。它只能从最内层循环退出到任意一层循环。 
//

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	printf("我开始运行了一个程序,下面我要展示代码11和代码22\n");
	goto quba;
	printf("代码11\n");
quba:                               //当然，它也可以往上跳进入死循环
	printf("代码22\n");

	printf("好吧，没人看见代码11去哪了\n");




	return 0;
}


