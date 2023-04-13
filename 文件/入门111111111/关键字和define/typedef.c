#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include <string.h>


//利用typedef能自己给关键字起小名
int main2()
{
	typedef unsigned int zhengshu;
	//从此 未来 unsiged int 都可以写为 zhengshu
	//即
	unsigned int type1 = -20;
	//和
	zhengshu type2 = -32;
	//是一模一样的
	printf("type1=%d\n", type1);
	printf("type2=%d\n", type2);




	return 0;
}
//因为实在不能让这个源文件编译，所以就考到“总览”里去了

