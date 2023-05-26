#define _CRT_SECURE_NO_DEPRECATE 1
#include"game.h"



void menu()
{
	printf("*****************************************\n");
	printf("***********      1、play      ***********\n");
	printf("***********      0、exit      ***********\n");
	printf("*****************************************\n");

}


void game()
{
//雷的信息储存
	//1、布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };   //扩大两格的棋盘


	//2、排查出的雷的信息
	char show[ROWS][COLS] = { 0 };  //玩家能看见的棋盘

//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');   //把棋盘上的东西都改为0
	InitBoard(show, ROWS, COLS, '*');  //把棋盘上的东西都改为*

//展示棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);     //若想 开挂请不要屏蔽
	//DisplayBoard(show, ROW, COL);    


//找出雷的相关信息,排雷
	FindMine(mine,show,ROW,COL);

}



void test()
{
	srand((unsigned int)time(NULL));


	int input = 0;
	do
	{
		clock_t start_t = clock();


		menu();
		printf("请选择>>:");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
		default:
			printf("阿杰提醒您：你TM选错了吧，请看好了再选>>:\n");
			break;
		}
		clock_t end_t = clock();
		printf("用时 ：%d s\n", (end_t - start_t)/100);
	} while (input);
}



int main()
{
	test();
	return 0;
}
