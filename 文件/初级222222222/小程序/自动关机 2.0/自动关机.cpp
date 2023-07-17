/*
日志
在1.0版本中，只能设置固定的关机分钟数，非常不人性化，所以我们这个版本将能够自定义关机时间，并且其他的功能不变

更新内容：
通过计算数字的位数将数字自动化的转化为string格式，并通过 .c_str() 函数将string类型转化为 char* 并交给 shutdown 使用
从而实现了动态的系统命令
即动态调整关机时间

2.1更新内容
增加了输入秒数的精细调控，使得关机时间更加精确

*/





#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<string>
#include<iostream>

//在电脑中搜索 cmd （command）----命令行
//打开后输入  shutdown -s -t 60 表示关机、设置关机、设置时间、60秒后关机。
// 输入shutdown -a  表示取消关机，不输入这个，干等着就关机了。
//在这里咱用system来执行系统命令                                                                                在<stdlib.h>中
// 



int wei_shu(double a)           //计算一个整数有几位的函数
{
	if (a == 0)
	{
		return 1;
	}
	int ws = 0;
	int b = a;
	while (b)
	{
		b /= 10;
		ws++;
	}
	return ws;

}



std::string turn_int_into_char(int a)              //将一个整数转化为string字符串的函数     ，  如果需要char* 型 则需要用 .c_str() 方法进行转换
{
	int ws = wei_shu(a);
	int* one_num = new int[ws];
	std::string the_char{};
	std::string a_num{};
	for (int i = 0; i < ws; i++)
	{
		one_num[ws - i - 1] = a % 10;
		a /= 10;
	}
	for (int i = 0; i < ws; i++)
	{
		the_char += ('0' + one_num[i]);
	}
	delete[ws] one_num;
	//std::cout << the_char << std::endl;
	return the_char;
}



int main()
{
	int shut_time_min = 0;
	int shut_time_s = 0;

	char input[20] = { 0 };
	std::string char_num{};

	int www_error = 6;
	while(www_error)
	{
		printf("请输入关机倒计时,单位：分钟 —> ");
		scanf("%d", &shut_time_min);

		printf("请输入附加关机倒计时,单位：秒 —> ");
		scanf("%d", &shut_time_s);

		if (shut_time_min >= 0 && shut_time_s >= 0)
		{
			char_num = "shutdown -s -t " + turn_int_into_char(shut_time_min * 60 + shut_time_s);
			www_error = 0;
		}
	}

	system(char_num.c_str());

again:
	printf("i请注意你的电脑将在 %d 分钟 %d 秒后关机，如果输入\"我是猪\"则取消关机\n", shut_time_min, shut_time_s);
	getchar();                        //因为上面的scanf有残余的字符会导致下面input被输入字符，从而触发判断“不想活了”。所以要用一个这个来清除队列中残余的字符
	scanf("%s", &input);
	if (strcmp(input, "我是猪") == 0) //strcmp是用来专门比较两个字符串的，如果两个字符串相同，就输出0            在<sring.h>中
	{
		system("shutdown -a");
	}
	else
	{
		printf("不想活了？？\n");
		goto again;
	}
	return 0;
}

/*更新内容：
可以自定义关机时间了

*/