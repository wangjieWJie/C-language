#define _CRT_SECURE_NO_DEPRECATE 1

#include"game.h"



void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1 ; i <= row; i++)
	{
		//打印列号
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;  //表示雷的个数，每布置一个雷，让他减一，当他等于零的时候，while循环为假，即停止循环
	while (count > 0)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}


int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x + 1][y - 1] - 8 * '0';  //字符123-字符0就等于数字123	        
	                                //8*‘0’表示8个字符零
}




void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;

	while (win < ROW*COL-EASY_COUNT)
	{
		printf("请输入排查雷的坐标>>>:");
		scanf("%d%d", &x, &y);

		if (x >= 1 && x <= row && y <= col && y >= 0)
		{
			//坐标合法
			if (mine[x][y] == '1')
			{
				printf("很遗憾你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else   //表示没踩到雷，应该统计周围的雷
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		
			if (win == ROW * COL - EASY_COUNT)
			{
				printf("恭喜你，成了!!!!!!!!!!!!\n");
			}

		}
		else
		{
			printf("输入坐标非法，请重新输入》》：");
		}
	}


}

