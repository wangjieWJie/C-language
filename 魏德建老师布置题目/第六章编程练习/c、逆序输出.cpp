#define _CRT_SECURE_NO_DEPRECATE 1
#include<iostream>
#include<string>
int main()
{
	using namespace std;
	int i{};
	int j{};
	string str;
	string obj;
	getline(cin,str);
	obj = str;
	while (str[i++] != '\0');
	for (i -= 2; i >= 0; i--)
	{
		obj[j++] = str[i];
	}
	cout << "逆输出结果为：\n" << obj << endl;


	return 0;
}
