#define _CRT_SECURE_NO_DEPRECATE 
#include<stdio.h>
#include<string.h>



int main1()
{
	int day = 0;
	scanf("%d", &day);

	if (1 == day)
		printf("周一\n");
	else if (2 == day)
		printf("周二\n");		

	//如果这样一直写到周天，要费老鼻子劲；所以用switch.


//switch语句也是一种分支语句，常常用于多分支的情况
		switch (day)					//switch表达式括号里的值一定是整型才行，不然会报错
		{
		case 1:                         //case  整型常量表达式;
			printf("周一\n");          //     语句;
			break;
		case 1+1:
			printf("周二\n");
			break;
		case 1+2:
			printf("周三\n");
			break;
		case 4:
			if (4 == day)
			    printf("周四\n");
			break;
		case 5:
			printf("周五\n");
			break;
		case 6:
			printf("周六\n");
			break;
		case 7:
			printf("周天\n");
			break;//好习惯，末尾也加break,未来再写不用加
		default:               //如果上面的分支都没能进得去，就走default
			printf("外星历法\n");

		}


		switch (day)
		{
		default:                  //没有放置顺序，建议放在结尾。
			printf("外星历法\n");

			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
				printf("工作日");
				break;
			case 6:
			case 7:
				printf("休息日");
				break;//好习惯，末尾也加break
		}




	return 0;
}
