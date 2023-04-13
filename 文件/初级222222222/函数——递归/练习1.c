#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>


// 题目
//接收一个整型值（无符号），按照顺序打印他的每一位。例如:
                                                     //  输入:1234   ，输出:  1  2  3  4


void print(int n)
{
    if(n>9)                   //只有n 不是一位数的时候才会执行，不然  栈溢出，
    {
        print(n / 10);        //说实话有点难，这里面放的是自定义函数print
    }                        //   1234/10=123
    printf("%d  ", n%10);    //   123/10=12
}                            //   12/10=1
                             //            1<9    打印1%10=1
int main2()                   //刚刚123/10=12结束时打印了一个12%10=2
{                            //就这样从最内层想最外层依次（执行）打印，就得到了 1  2  3  4  
    unsigned int num = 0;
    scanf("%d", &num);
    print(num);


    return 0;
}