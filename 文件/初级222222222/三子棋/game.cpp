#define _CRT_SECURE_NO_DEPRECATE 1


#include"game.h"     //包含stdio.h



void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------


//           |   |             
//        ---|---|---
//           |   |            就是能打印出这么个玩意就行
//        ---|---|---            
//           |   |   


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{//分为两步
		for (j = 0; j < col; j++)
		{
			//1、打印一行的数据
			if (j < col - 1)
			{
				printf("  %c |", board[i][j]);
			}
			else
			{
				printf("  %c \n", board[i][j]);
			}
		}

		for (j = 0; j < col; j++)
		{
			//2、打印分隔行
			if (j < col - 1 & i < row - 1)
			{
				printf("____|");
			}
			else if (i == row - 1 & j < col - 1)
			{
				printf("    |");
			}
			else if (j == col - 1 & i < row - 1)
			{
				printf("____");
			}
			else
			{
				printf("    ");
			}
		}
		printf("\n");
	}
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------


void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走\n");
	while(1)
	{
		printf("请输入要下的坐标>>:");
		scanf("%d%d", &x, &y);

		//x = x - 1;         //这两行是我自己写的
		//y = y - 1;

		//判断玩家所选坐标的合法性
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法,请重新输入\n");
		}
	}
}


//-----------------------------------------------------------------------------------------------------------------------------------------------------


void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走>>:\n");
	Sleep(2000);        //在<windows.h>里（实际上不引入也能用），单位是ms

	while(1)

	{
		//必须把 x y 放在循环内，否则x y 无法重新随机
		int x = rand() % row;   //利用的是，余数一定小于除数，并且大于等于零。  0、1、2
		int y = rand() % col;          //rand 的随机时间写在 test 的开头了
		if (board[x][y] == ' ')
		{
			board[x][y] = '0';
			break;
		}
	}
}


//-----------------------------------------------------------------------------------------------------------------------------------------------------


int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;    //没满
			}
		}
	}
	return 1;
}


//——————————————————————————————————————————————————————————————————————————————————-

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
//横三行——————- 一行三个 一样的，并且不是空格。
	for (i = 0; i < row; i++)
	{
	
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][1]!=' ')
		{
			return board[i][1];
		}
	}
//竖三列——————- 一列三个一样的，并且不是空格。
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}

//斜三个——————- 斜着三个一样的，并且不是空格----两种情况
	if (board[0][0] == board[2][2] && board[0][0] == board[1][1] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[1][1] != ' ')
		return board[1][1];

//判断是否平局
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';

}

