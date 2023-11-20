#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//在电脑中搜索 cmd （command）----命令行
//打开后输入  shutdown -s -t 60 表示关机、设置关机、设置时间、60秒后关机。
// 输入shutdown -a  表示取消关机，不输入这个，干等着就关机了。
//在这里咱用system来执行系统命令                                                                                在<stdlib.h>中
// 


int main()
{
	char input[20] = { 0 };

	system("shutdown -s -t 180");
again:
	printf("i请注意你的电脑将在3分钟后关机，如果输入我是猪则取消关机\n");

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
//在这个文件对应的Debug文件夹里找到对应的 自动关机.exe 文件，然后百度搜索把他添加到  服务 里，然后右键属性，把启动类型改为自动，
//那么电脑就会在开机2分钟之后关机。