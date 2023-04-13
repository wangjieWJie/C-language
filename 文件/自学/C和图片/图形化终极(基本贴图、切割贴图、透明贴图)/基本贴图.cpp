#define _CRT_SECURE_NO_DEPRECATE 1



#include <graphics.h>		// 引用图形库头文件
#include <conio.h>
int main111() {
	//// 绘图窗口初始化
	initgraph(4000,4000);	// 创建绘图窗口，大小为 4000x4000 像素

	//贴图三部曲
	//1.定义一个IMAGE类型的变量 去存储图片
	//就和定义一个整型变量一样
	//int a;
	//a=1;
	IMAGE mm;
	//2.加载图片:通过路径加载
	loadimage(NULL, _T("C:\\wj\ganyu.jpg"));
	loadimage(&mm, "C:\\wj\ganyu.jpg", 4000, 2900);//w:图片的宽，h:图片的高
	//3.显示图片
	putimage

	//按任意键退出
	_getch();
	closegraph();



	return 0;
}

//————————————————
//版权声明：本文为CSDN博主「莫九梦」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
//原文链接：https ://blog.csdn.net/qq_66954747/article/details/124106889