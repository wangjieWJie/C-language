#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>
#include<string.h>

int main()
{

	//3、在一个有序数组中查找具体的某个数字n。 编写int binsearch(int x, int v0, int n);功能：在v[O]	<= v[1] <= v[2] <= .... <= v[n - 1]的数组中查找x.
	 //写一个代码，在数组（有序的）中找到一个某个数字


	//还是刚才的问题，用折半算法从n个数字里找某个数就只需要找log以二为底n的对数log n
	//                                                                            2
	
	int manghe[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int gui = 13;                                     //我们的任务就是从这二十个数里找到13
	//加大点难度
	scanf("%d", &gui);
	if(gui>20)
	{
		gui = 11;
		printf("输入错误，已返回默认值11\n");
	}

	int geshu = sizeof(manghe) / sizeof(manghe[0]);   //计算数组里总共有几个元素
	int left = 0;                                    //最左边元素的下表
	int right = geshu - 1;                           //最右边元素的下表
	while (left <= right)
	{
		int mid = (right + left) / 2;
		if (manghe[mid] > gui)
		{
			right = mid - 1;
		}
		else if (manghe[mid] < gui)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是:%d", mid);
			break;
		}
	}
	return 0;
}
//之前看课记的笔记忘了保存了，这个是凭记忆想的，有点差距