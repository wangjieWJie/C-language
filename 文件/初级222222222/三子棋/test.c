//测试三子棋
//先写一个大体思路的测试，看看整体有没有大问题，并作为一个框架开展下面的代码编写

#define _CRT_SECURE_NO_DEPRECATE 1

#include"game.h"     //stdio.h 


void menu()
{
	printf("*****************************************\n");
	printf("****    1、play          0、exit    *****\n");
	printf("*****************************************\n");

}

void game()
{
	char ret = ' ';

	//创建一个数组——存放玩家和电脑的棋盘信息
	char board[ROW][COL] = {0};   //行和列在game.c文件里，通过 头文件引用进来。

	//初始化棋盘
	InitBoard(board, ROW, COL);   //棋盘的初始化在头文件里

	//打印棋盘
	DisplayBoard(board,ROW,COL);

	//你一步我一步  下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		system("cls");       //system是执行系统命令的一个函数，---cls则表示清空屏幕  他在<stdlib.h>里
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//电脑下棋
		ComputerMove(board, ROW, COL);
		system("cls");       //system是执行系统命令的一个函数，---cls则表示清空屏幕  他在<stdlib.h>里
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

	}

	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if(ret=='0')
	{
		printf("电脑赢\n");
	}
	else if(ret='Q')
	{
		printf("平局\n");
	}

}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{

		menu();
		printf("请选择》》：");
		scanf("%d", &input);
		system("cls");       //system是执行系统命令的一个函数，---cls则表示清空屏幕  他在<stdlib.h>里

		switch(input)
		{
			case 1:
				printf("三子棋\n");
				game();
				break;
			case 0:
				break;
			default:
				printf("选择错误，请重新选择：\n");
				break;
		}
	} while (input);  //这个do while 循环是为了让你能一遍一遍的玩游戏。
	                  //当input为0（就是为假）时，跳出循环，当input为1（非零为真）时，开始下一轮循环。

}



int main()
{

	test();

	return 0;
}