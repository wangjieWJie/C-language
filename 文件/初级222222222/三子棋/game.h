#define _CRT_SECURE_NO_DEPRECATE 1


#include<stdio.h>           //因为所有的源文件都引用了这个头文件，所以我们把stdio.h放到这里，那么其他的源文件就不要用引了
#include<stdlib.h>          
#include<time.h>
#include<Windows.h>


//宏定义

#define ROW 3   //行
#define COL 3   //列

//声名一下

void InitBoard(char board[ROW][COL],int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL],int row,int col);
//应该能告诉我们四种状态
//1、没有赢家，继续游戏——'C'
//2、玩家赢————————'*'
//3、电脑赢————————'0'
//3、平局—————————'Q'


