#define _CRT_SECURE_NO_DEPRECATE 1

#include <graphics.h>
#include <conio.h>

// 主函数
int main()
{
	// 绘图窗口初始化
	initgraph(1080, 1000);

	// 读取图片至绘图窗口
	loadimage(NULL, _T("C:\\wj\\22.jpg"));

	// 按任意键退出
	_getch();
	closegraph();
}

//C:\\wj\ganyu.jpg