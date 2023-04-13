#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
 
//二分法查找
//找不到返回-250
                                             //形参和实参用同一个k表示是可以的，语法上很支持
int binary_rearch(int arr[],int k,int sz)  //数组是个相对很大的东西，可能占用很大的空间，所以数组在传参的时候，传递过来的的是数组首元素的地址
{                                            //arr在这里本质上是一个指针，win32系统指针就是大小就是4。所以只能在函数外算完了再传过来
	int left = 0;
	int right = sz - 1;
	if (k > sz)
	{
		return - 250;
	}
	while(left<=right)                    //千万记得这个这个等号
	{
		int mid = (left + right) / 2;    //中间元素的下标;注意别放在循环外面
	
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if(arr[mid]>k)
		{
			right =mid - 1;
		
		}
		else //if(arr[mid]=k)
		{
			return mid;
		}
		
	}
	return -250;
}

int main5()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	int k = 4;

	int sz = sizeof(arr) / sizeof(arr[0]);

	scanf("%d", &k);
	int ret = binary_rearch(arr, k,sz);
	if (-250==ret)
	{
		printf("找不到指定数字\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}

	return 0;
}