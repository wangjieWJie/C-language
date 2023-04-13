#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
int main()
{
	int shuzu[10];//存放十个整型数字的数组
	char zhongwen[20];//存放二十个字符的数组
	float xiaoshu[5];//存放五个小数的数组


	int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13};//他们在储存空间中的下标是从零开始的           即1-0 2-1 3-2......

	printf("%d\n", arr[4]);//用下标的方法访问元素

	int i = 0;
	while (i < 13)
	{
		printf("%d   /  ", arr[i]);//引号里面好像能写任何东西？
		i++;
	}



	int sz[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };//其实数组可以不指定大小，他会自己确定元素个数







	return 0;
}
