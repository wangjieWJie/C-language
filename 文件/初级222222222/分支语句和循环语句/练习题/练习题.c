#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h> 
#include<windows.h>
#include<stdlib.h>

int main1()
{
	//1、计算n的阶乘(n!)               1.52.14

	int n = 0;
	scanf("%d", &n);
	int KU = 1;
	for (n = n; n != 0; KU = KU * n, n--)
	{

	}

	printf("n的阶乘是%d\n", KU);

	//做了十五六分钟吧，做完迷迷糊糊的，不知道自己咋做的
		/////////////////鹏哥和我写的是一模一样，一点不差的的，就是把  KU =KU*n  放在了下面的大括号里，



	//计算（1!+2!+3!+......+n!)
	int N = 1;
	scanf("%d", &N);
	int meixiang = 1;
	int dange = 1;
	int zonghe = 0;
	for (meixiang; meixiang <= N; meixiang++)
	{
		dange = meixiang * dange;
		zonghe += dange;
	}
	printf("阶乘之和为%d\n", zonghe);

	//66666,感觉是懵懵懂懂，但是耗时比上一个短多了，感觉对for循环多了不少了解。有空多自己编几个编程是很有帮助的(可能是对阶乘有了更深的理解，做题好做了)
//////////////////////鹏哥的的解法如下所示，目测只能算到10，不如我的好。
	/*
	int i = 0; 
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
	    //结果就等于
	    sum = sum + ret;
	}
		printf("sum = %d\n", sum);
	*/

	//这是改进后的大佬写法
	/*
	int main()
	{
		int i = 0; 
		int n = 0; 
		int ret = 1; 
		int sum = 0;
		for (n = 1; n <= 10; n++)
		{
			ret = ret * n;
			//结果就等于
			sum = sum + ret;
		}
			printf("sum = %d\n", sum);
		return 0;
	}
	*/





//                        以下习题直接写答案，因为看不懂题目
//3、在一个有序数组中查找具体的某个数字n。 编写int binsearch(int x, int v0, int n);功能：在v[O]	<= v[1] <= v[2] <= .... <= v[n - 1]的数组中查找x.
	 //写一个代码，在数组（有序的）中找到一个某个数字
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	scanf("%d", &k);
	//那就找k吧
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了，下标是%d\n",i);
			break;                             //若是能找到就跳出去，若是跳不出去，i 就会一直加1，直到加到和sz一样大就进不去循环了
		}
	}

	if (i == sz)
	{
		printf("找不到\n");
	}






//4、编写代码，演示多个字符从两端移动，向中间汇聚。

	char zifu1[] = "welcome to SZY!!!!";
	char zifu2[] = "##################";
	int left0 = 0;
	int right0 = sizeof(zifu1)-2;         //字母最后面有个 \0  所以sizeof算出数组大小来，再减二就能到到最右边的数是第几个数，减一的话只能代表最右边数的坐标
	                                      //整数数组无需考虑\0的问题，但字符串或字符数就要考虑\0了，，，所以就用strlen求字符串（数）的个数
	right0 = strlen(zifu1)-1;           //他是求字符串长度(元素个数)的，遇到\0就停了，所以不用考虑\0

	while (left0 <= right0)
	{
		zifu2[left0] = zifu1[left0];              //让第一个数组里的元素进入到第二个数组的相应位置
		zifu2[right0] = zifu1[right0];
		printf("%s\n",zifu2);
		//为了让他动态展示，我们让他每打印一次停留一秒
		Sleep(1000);        //在<windows.h>里（实际上不引入也能用），单位是ms
		//
		//还是不够动态，就用如下吧
		system("cls");       //system是执行系统命令的一个函数，---cls则表示清空屏幕  他在<stdlib.h>里
		

		left0++;
		right0--;
	}

	printf("%s\n", zifu2);



//5、编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序）。
		
	int gongjvshu = 0;
	char password[20] = {0};
	
	for (gongjvshu = 0; gongjvshu <= 5; gongjvshu++)
	{
		printf("请输入密码》");
		scanf("%s", password);           //注意，这里不用取地址符哦。
		if (strcmp(password, "301251") == 0)          //等号不能用来比较两个字符串是否相等。应该用一个库函数---strcmp .括号里相等就返回0       .。他在<string.h> 里
		{                                             //在strcmp里,前面的大于后面的就返回一个大于零的数，反之则反。相等就返回0
			printf("\n登陆成功\n");
			break;
		}
		else
			printf("密码错误\n");
	}


	if (gongjvshu == 5)
		printf("三次密码输入错误，退出程序。\n");


	return 0;
}