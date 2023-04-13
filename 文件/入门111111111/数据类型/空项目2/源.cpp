#include<stdio.h>

int main()
{
	char hehe = 'CAO';
	printf("%c\n", hehe);//打印字符格式的数据

	int age = 20;
	printf(" % d\n", age);//打印整型十进制数据

	short int age2 = 20;//用shaot int 请求的空间更小，用来盛放20绰绰有余，更为节省空间和合理
	printf(" % d\n", age2);//打印整型十进制数据

	long num = 100;
		printf("%d\n", num);
    
		float dain = 3.1f;
			printf("%f\n", dain);//后面有五个零

			double pai = 3.14;
			printf("%lf\n", pai);//可以用%f 但lf更准确

	
			printf("%d\n", sizeof(char));
			printf("%d\n", sizeof(short));
			printf("%d\n", sizeof(int));
			printf("%d\n", sizeof(long));//C语言规定sizeof(long)的大小>=sizeof(int)的大小,所以平台不同有的是7有的是8字节
			printf("%d\n", sizeof(long long));
			printf("%d\n", sizeof(float));
			printf("%d\n", sizeof(double));
		


	return 0;
}