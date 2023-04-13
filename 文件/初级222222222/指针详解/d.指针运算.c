#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

//指针 + - 整数
//指针 - 指针
//指针的关系运算

int my_strlen(char* str)
{
	char* start = str;    //使 start 表示首元素的地址
	char* end = str;      //想办法使 end 表示‘\0’的地址
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}





int main4()
{
	//1、指针+-整数
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 1;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *p);
		p++;
	}

	p = arr;
	for (i = 0; i < sz / 2; i++)
	{
		printf("%d\n", *p);
		p += 2;
	}


	p = &arr[9];                    //一定要记得 & 取地址符号 ，arr 时地址，但加上[]就代表元素了
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *p);
		p -= 1;
	}


	for (int* vp = &arr[0]; vp < &arr[9];)      //注意这个写法，是  指针的关系运算
	{
		*vp += 1;                              //将整个数组初始化为 0 了
		vp++;

	}



//指针 - 指针
	int arrr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("\n\n\n指针之间的元素个数为：%d\n", &arrr[9] - &arrr[0]);      //指针 - 指针：得到的是指针之间的元素个数,反过来就是负的所以要取绝对值


	//之前写过两个求字符串长度的方法，分别是 计数器法 和 递归法（详见“函数——递归《练习2》”）
	//今天再写一种方法
	char text_arr[] = "bite your ear";   
	int len = my_strlen(text_arr);
	printf("数组包含的元素个数为：%d\n", len);


//指针的关系运算
	//就是后面的指针比前面的指针大

	//C语言标准规定
	//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与指向第一个元素之前的那个内存位置的指针进行比较（虽然并没有什么卵事）
	float values[5];
	for (float* vp = &values[5]; vp > &values;)        //根据标准规定，不可以写作 vp >= &values
	{
		*--vp;
	}
	

	return 0;
}