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


void get_mine_count(char mine[ROWS][COLS],char show[ROWS][COLS],int x,int y)
{
	int around = mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x + 1][y - 1] - 8 * '0';  //字符123-字符0就等于数字123	        
	                                //8*‘0’表示8个字符零
	if (0 < x <= ROW && 0 < y <= COL)
	{
		if (0 == around && '*' == show[x][y])
		{

			show[x][y] = ' ';

			get_mine_count(mine, show, x + 1, y);
			get_mine_count(mine, show, x + 1, y + 1);
			get_mine_count(mine, show, x + 1, y - 1);
			get_mine_count(mine, show, x - 1, y);
			get_mine_count(mine, show, x - 1, y + 1);
			get_mine_count(mine, show, x - 1, y - 1);
			get_mine_count(mine, show, x, y + 1);
			get_mine_count(mine, show, x, y - 1);


		}
		else if (0 != around)
		{
			show[x][y] = around + '0';
		}
	}
}

int IsWin(char show[ROWS][COLS],int row,int col)
{
	int i = 0;
	int j = 0;
	int unknow = 0;
	for (i = 1; i <= col; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if ('*' == show[i][j])
			{
				unknow++;
			}
		}
	}
	return unknow;
}
  


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = ROW*COL;

	while (win >= EASY_COUNT)
	{
		printf("阿杰请您麻溜的输入排查雷的坐标>>>:");
		scanf("%d%d", &x, &y);
		system("cls");       //system是执行系统命令的一个函数，---cls则表示清空屏幕  他在<stdlib.h>里
		int ret = 1;

		if (x >= 1 && x <= row && y <= col && y >= 0)
		{
			//坐标合法
			if (mine[x][y] == '1')
			{
				if (ROW * COL == win)
				{
					mine[x][y] == '0';

					while (ret)
					{
						int xx = rand() % row + 1;
						int yy = rand() % col + 1;
						if ('0' == mine[xx][yy])
						{
							mine[xx][yy] = '1';
							ret = 0;
						}
					}
				}
				else
				{
					printf("啧啧啧，被炸死了呢\n");
					DisplayBoard(mine, row, col);
					break;
				}
			}
			else   //表示没踩到雷，应该统计周围的雷
			{
				get_mine_count(mine,show, x, y);
				DisplayBoard(show, row, col);
				win=IsWin(show, ROW, COL);
				printf("当前未探索的区块：%d\n", win);

			}
		
			if (win == EASY_COUNT)
			{
				printf("阿杰恭喜你，成了!!!!!!!!!!!!快入洞房吧\n");
				break;
			}
			else if (0 == ret)
			{
				printf("我焯 NB，其实这是你的第二条命\n");
				get_mine_count(mine, show, x, y);
				DisplayBoard(show, row, col);
				win = IsWin(show, ROW, COL);
				printf("当前未探索的区块：%d\n", win);
			}

		}
		else
		{
			printf("阿杰提醒您：您TM输入的坐标非法知道不，麻溜的重输》》：");
		}
	}


}

