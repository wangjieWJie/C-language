#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>




void menu()
{
	printf("***********************************\n");
	printf("****     1.play     0.exit      ***\n");
	printf("***********************************\n");
}


#define RAND_MAX 0x7FFF

void game()
{
	int r = 0;                                         
	int guess = 0;


	//在使用rand之前，先用srand设置那个随机数的一个生成器，

	//srand(2);      //设置一个随机起点
	//起点是随机的随机数才是随机的，不然随机产生的随机数的顺序都是一样的，你背过就完了
	//所以我们用时间戳来设置随机数的生成起点。
	//时间戳                                                 time在<time.h>里
	//time_t time(time_t*timer);
	//    srand((unsigned int)time(NULL));    这个设置器在整个函数里设置一次就行了，在game这个函数里会被反复调用，所以会产生一些BUG。
	//所以我们把他放到主函数里面


	r=rand()%100+1;  //因为32767太大了，咱就取他除以一百的余数，那这个余数肯定是小于100的，即1~99之间，那咱们给它加上一个1，就变成了100及以内的数了。所以猜吧
	//printf("%d\n", r);

	while (1)
	{
		printf("请猜数字\n");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("猜大了\n");
		}
		else if (guess < r)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了！！！！\n");
			break;
		}
	}

}




int main2()
{
	srand((unsigned int)time(NULL));    //在整个工程中我们只需要调用一次就可以。

	int e = 0;
	do
	{
		menu();
		printf("请选择》");
		scanf("%d", &e);
		switch (e)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (e);


	return 0;
}







