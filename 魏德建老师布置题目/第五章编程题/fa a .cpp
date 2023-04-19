#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
int main()
{
	int i, j;
	j = 0;
	for (i = 1; i <= 200; i++)
	{
		if (i % 10 == 8)
			j += i;
		if ((i / 10) % 10 == 8)
			j += i;
	}
	printf("%d\n", j);
	i = 1;
	j = 0;
	while (i <= 200)
	{
		if (i % 10 == 8)
			j += i;
		if ((i / 10) % 10 == 8)
			j += i;
		i++;
	}
	printf("%d\n", j);
	return 0;
}