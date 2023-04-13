#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		printf("hehe\n");
		arr[i] = { 0 };
	}

	system("pause");
	return 0;
}


//在早先版本的vs中 这段代码因为野指针问题会出现死循环的问题，但是不知道为啥我这个vs 2022 二三年三月最新版不会死循环
//
// 在 Debug 中会死循环
//但是在 Release 版本中就会打印12个hehe然后停止运行

//说明 Release 在功能上做了优化，使得本来死循环的程序可以正常运行了

