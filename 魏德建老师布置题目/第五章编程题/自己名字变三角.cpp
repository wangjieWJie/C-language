#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>

//把自己的名字打印成三角  

                            //22生医 王杰 2022121144

#define ROW 8
void name_triangle(char name[])
{
	int len = strlen(name);
	if (0 == len % 2)
	{
		for (int i = 1; i < ROW; i++)
		{
			for (int n = ROW - i; n > 1; n--)
			{
				printf(" ");
			}
			for (int j = 1; j <= i; j++)
			{
				printf("%c", name);
			}
			printf("\n");
		}
	}

}

int main2()
{
	char name[] = "王杰";
	name_triangle(name);

	return 0;
}