#define _CRT_SECURE_NO_DEPRECATE 1
#include<iostream>
int main1()
{
	using namespace std;
	int i{};
	int Fib[40]{};
	Fib[0] = 1;
	Fib[1] = 1;
	cout << Fib[0] << "  " << Fib[1] << "  ";
	for (i = 2; i < 40; i++)
	{
		Fib[i] = Fib[i - 1] + Fib[i - 2];
		cout << Fib[i] << "  ";
	}



	return 0;
}