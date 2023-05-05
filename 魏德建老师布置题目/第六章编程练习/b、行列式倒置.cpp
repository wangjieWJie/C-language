#define _CRT_SECURE_NO_DEPRECATE 1
#include<iostream>
#include<iomanip>
const int RC = 15;
using namespace std;
void show(std::string name,int arr[RC][RC])
{
	cout << name<<" :\n";
	int i{};
	int j{};
	for (i = 0; i < RC; i++)
	{
		for(j=0;j<RC;j++)
		{
			cout<< setw(5)<< arr[i][j];
		}
		cout << endl;
	}
}
void Ini_arr(int arr[RC][RC])
{
	int go = 1;
	for (int i = 0; i < RC; i++)
	{
		for (int j = 0; j < RC; j++)
		{
			arr[i][j] = go;
			go++;
		}
	}
}


int main()
{
	int i{};
	int j{};
	int array_a[RC][RC] = { 0 };
	int array_b[RC][RC]{};
	Ini_arr(array_a);
	show("array_a", array_a);
	for (i = 0; i < RC; i++)
	{
		for ( j = 0; j < RC; j++)
		{
			array_b[i][j] = array_a[j][i];
		}
	}
	show("array_", array_b);

	return 0;
}