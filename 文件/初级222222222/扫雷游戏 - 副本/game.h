#define _CRT_SECURE_NO_DEPRECATE 1
#define ROW 9
#define COL 9
#define ROWS ROW+2   //相比原来的棋盘扩大两格
#define COLS COL+2   //为了边缘统计雷的个数更方便

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define EASY_COUNT 10
#define HAED_COUNT 15

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROW][COL], int row, int col);

//我在老师的带领下在上一个扫雷中完成了如下几项功能：
//       1、创建棋盘并放置雷
//       2、能判断是否扫到了雷，以及输赢的判断方法（根据已经探索了多少块区域判断剩下的区域是
//         否还要继续探索----既每扫一次雷记一个数，待次数与空白无雷的格数相等时判定胜利）
//       3、能显示指示的点周围雷的个数
// 
// 
//在这款扫雷中，我又独立完成了以下优化：
//
// 1、增加了第一次点击不会被炸死的功能
// 2、增加了周围没有雷时自动展开无雷区的功能（递归）
// 3、优化了输赢的判断方法（计算未探索的区域还有多少，当未探索的区域等于雷的个数
//    时，判定胜利）
// 
// 
// 
//我觉得还应该增加的功能有：
// 
//1、计时系统
//2、统计几局游戏中最好成绩时长
//3、便捷的改变难度和棋盘大小的功能
//*****************************************
// ****************************************
// 
//如果以后会用Easy_X加入图形的话，会考虑加入以上功能