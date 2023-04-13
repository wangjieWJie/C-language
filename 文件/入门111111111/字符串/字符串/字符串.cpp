#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "abcd";//把字符串放到数组里面语法上是支持的,,,,,里面包含a、b、c、d和\0（字符串的结束标志）

	char arr2[] = { 'a','b','c',0 };//也可以放\0(标准的就是\0)
	//每一个字符都有对应值，在	ASCII编码表中a的ASCII码值是97,A是65......\0的值是0。
	printf("%s\n", arr1);//字符串类型要用s
	printf("%s\n", arr2);


	char arr3[] = "abc";
	char arr4[] = { 'a','b','c' };
	printf("%d\n", strlen(arr3));//strlen是统计字符串长度的函数，从开始一直数到\0看看有多少位(不算上\0)
	printf("%d\n", strlen(arr4));
	return 0;
}