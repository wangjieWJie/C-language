#define _CRT_SECURE_NO_DEPRECATE 1
#include<iostream>
const int ROW = 3;
const int COL = 3;
using namespace std;
void show(std::string name,int arr[ROW][COL])
{
	cout << name<<" :\n";
	int i{};
	int j{};
	for (i = 0; i < ROW; i++)
	{
		for(j=0;j<COL;j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
}
int main2()
{
	int i{};
	int j{};
	int array_a[ROW][COL] = { 1,2,3,4,5,6,7,8,9 };
	int array_b[ROW][COL]{};
	show("array_a", array_a);
	for (i = 0; i < ROW; i++)
	{
		for ( j = 0; j < COL; j++)
		{
			array_b[i][j] = array_a[j][i];
		}
	}
	show("array_", array_b);

	return 0;
}