#define _CRT_SECURE_NO_DEPRECATE 1
#define ROW 9
#define COL 9
#define ROWS ROW+2   //相比原来的棋盘扩大两格
#define COLS COL+2   //为了边缘统计雷的个数更方便

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define EASY_COUNT 10
#define HAED_COUNT 20



 
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROW][COL], int row, int col);



//这是在老师的带领下初步开发的一款扫雷，功能如下：
// 
//  1、创建棋盘并放置雷
//  2、能判断是否扫到了雷，以及输赢的判断方法（根据已经探索了多少块区域判断剩下的区域是
//     否还要继续探索----既每扫一次雷记一个数，待次数与空白无雷的格数相等时判定胜利）
//  3、能显示指示的点周围雷的个数