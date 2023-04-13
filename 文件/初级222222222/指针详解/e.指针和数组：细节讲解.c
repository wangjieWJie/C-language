#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

int main5()
{
	int arr[10] = { 0 };

	printf(" arr 的 地  址 ：%p\n", arr);      // +1 向后跳 4 个字节
	printf("arr首元素的地址：%p\n", &arr[0]);  // +1 向后跳 4 个字节
	//arr不代表首元素地址的特例：
	printf("取地址arr的地址：%p\n", &arr); //虽然他的地址和前两个的地址一模一样，但是他 +1 会向后跳 40 个字节

	//1、 &arr—— &数组名 —— 数组名不是首元素的地址 —— 数组名表示整个数组 —— &数组名 取出的是整个数组的地址
	//2、sizeof(arr) —— sizeof(数组名) —— 数组名表示的是整个数组 —— sizeof(数组名)计算的是整个数组的大小
	//就这两个特例


	//学这么多，这是重点
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf(" %p ====== %p \n", p + i, &arr[i]);   //就是说明可以化繁为简，可以以多种方式来操作数组
	}

	return 0;
}