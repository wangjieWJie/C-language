/*
日志
2.2 更新内容
在2.1版本中，只能输入整数分钟数和整数秒数，所以我想增加一个输入小数秒数来控制关机时间的功能，以便简化操作
由于命令里面只能包含整数，所以我只是修改了输入类型，让他支持小数了，但是只支持一位小数
因为他是通过乘以六十来化整的，多余的小数会被自动类型转化给抹掉

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



int wei_shu(double a)           //计算一个有几位的函数
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



std::string turn_int_into_char(float a)              //将一个整数转化为string字符串的函数     ，  如果需要char* 型 则需要用 .c_str() 方法进行转换
{
	int tep_a = a;
	int ws = wei_shu(tep_a);
	int* one_num = new int[ws];
	std::string the_char{};
	std::string a_num{};
	for (int i = 0; i < ws; i++)
	{
		one_num[ws - i - 1] = tep_a % 10;
		tep_a /= 10;
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
	float shut_time = 0;
	char input[20] = { 0 };
	std::string char_num{};

	int www_error = 6;
	while(www_error)
	{
		printf("请输入关机倒计时,单位：分钟(最多小数点后面一位) —> ");
		scanf("%f", &shut_time);

		if (shut_time >= 0)
		{
			char_num = "shutdown -s -t " + turn_int_into_char(shut_time * 60);
			www_error = 0;
		}
	}

	int int_time = shut_time;

	system(char_num.c_str());

	int again = 6;
	while(again)
	{
		printf("i请注意你的电脑将在 %d 分钟 %.0f 秒后关机，如果输入我是猪则取消关机\n", int_time, (shut_time - int_time) * 60);
		getchar();                        //因为上面的scanf有残余的字符会导致下面input被输入字符，从而触发判断“不想活了”。所以要用一个这个来清除队列中残余的字符
		scanf("%s", &input);
		if (strcmp(input, "我是猪") == 0) //strcmp是用来专门比较两个字符串的，如果两个字符串相同，就输出0            在<sring.h>中
		{
			system("shutdown -a");
			again = 0;
		}
		else
		{
			printf("不想活了？？\n");
		}
	}
	return 0;
}

/*更新内容：
可以自定义关机时间了
通过计算数字的位数将数字自动化的转化为string格式，并通过 .c_str() 函数将string类型转化为 char* 并交给 shutdown 使用
从而实现了动态的系统命令
即动态调整关机时间

*/