#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
int main()
{
//下面是if语句的展示：
	int i = 0;
	printf("加入比特\n");
	printf("你要好好学习吗？（1、0）\n");

	scanf("%d", &i);//注意这个输入时不写\n他也会自动换行，如果写上\n那就有可能出现bug

	if (i == 1)
		printf("好家伙有胆\n");
	else
		printf("不是老对\n");




//下面将是while循环的展示
	int line = 0;

	printf("你现在是一个屌丝\n");
	printf("然后你将通过敲代码来改变你的命运\n");

	while (line < 20000)
	{
		printf("你敲了%d",line);
		printf("行代码\n");
		line++;
	}
	if (line>=20000)
		printf("good job,knowledge chang your life!");




	
	return 0;

}