#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>



void bubble_sort_y(int arr[], int sz)    
{
	int i = 0;

	for (i = 0; i < sz - 1; i++)  
	{
		int flag = 1;    //假设这一趟要排列的数据已经有序 ——————————————————————————————————————————————————————

		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) 
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;

				flag = 0;        //如果flag是0，那么说明：本趟排序的数据其实不完全有序————————————————————————————————————
			}                    //只要它还有一个没有正确排列的数字，那么flag在这趟排列中就是0，整个排列的过程就不会停止
		}

		if(flag == 1)      //自己看看，一旦flag在一次循环之后等于1了，那么整个数组必定完全排列好了，而且一个差错也不会有——————————————————————————
			break;         
		//确实break语句只能用于for和switch语句，不能用于if语句，因为if不是循环语句，所以不能用break结束。。但是这个地方的break是作用于整个循环的，是能跳出整个循环的
		
	}


}




int main()
{
	int arr[] = { 8,6,7,5,2,1,4,0,9,3 };

	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort_y(arr, sz);     

	for (i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

