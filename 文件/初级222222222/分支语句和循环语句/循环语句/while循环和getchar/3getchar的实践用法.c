#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>
#include<string.h> 


int main3() {
	char password[20] = { 0 };
	int ret = 0;
	printf("请输入密码:>");
	scanf("%s", password);         //把字符输入到了输入缓冲区，然后scanf拿走了输入的数字，剩下了你做最后敲的一个回车，即\n
	printf("请确认（Y.N）"); 
	getchar();                   //getchar 把剩下的\n 拿走了  ，\n在ASCII码表中十进制是10，所以ret =10，所以要在这里加上一个getchar 来取走这个\n
	ret = getchar();               

	if (ret == 'Y') {
		printf("确认成功");
	}
	else
	{
		printf("放弃确认");
	}
	return 0;
}