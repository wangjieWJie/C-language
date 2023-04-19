#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>

//把自己的名字打印成三角  

							//22生医 王杰 2022121144
#define ROW 10
void name_printf(char name_f[], int size)
{
		for (int i = 1; i <= ROW; i++)
		{
			for (int n = 1; n <= (size-1)/2*(ROW - i); n++)
			{
				printf(" ");
			} 
			for (int j = 1; j <= i; j++)
			{
				printf("%s", name_f);
			}
			printf("\n");
		}
	
}
int main()
{
	char name[] = "王杰";
	name_printf(name, sizeof(name));
	return 0;
}