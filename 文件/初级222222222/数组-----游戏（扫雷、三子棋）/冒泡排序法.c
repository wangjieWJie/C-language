#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

void bubble_sort(int arr[], int sz)      //如果直接传参传数组本身，那么电脑为了节省空间只会传第一个参数过去。
{
	//首先确定冒泡排序的趟数
	int i = 0;

	for (i = 0; i < sz - 1; i++)    //sz-1表示趟数，就是几趟冒泡排序
	{
		//每一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz-1-i; j++)   //sz-1-i 就是把前 sz-1-i 个数排列一下
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}


}




int main1()
{
	int arr[] = { 8,6,7,5,2,1,4,0,9,3 };
	// //
	//对arr进行排序，使其成为升序
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz);      //这样，这里有[]，函数上没有[]，就是把地址传过去了     数组名是一个首元素地址

	for (i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

//这个函数太老实了，所以效率很低
//我们可以优化一下