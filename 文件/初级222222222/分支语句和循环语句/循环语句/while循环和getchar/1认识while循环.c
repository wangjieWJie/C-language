#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h> 

//循环中用的最多的是for
//其次是   while
//用的最少的是  do...while




//while循环的缺点。。。结构不紧凑，初始化、判断、调整太分散。不好修改
//所以以后都用for循环，while循环就白学了


int main1()
{
    //简单的循环已省略，详细请看之前的入门文件。
    int i = 1;              //循环变量的初始化

    while (i < 100)        //循环变量的判断
    {
        i++;              //循环变量的调整
        printf("%d\n", i);
        
          if (i == 10)
            break;      //在循环中只要遇到Break,就停止后期的所有循环,直接终止循环. 所以while中的break是用于永久终止循环的 .
      
          if (i== 5)
            continue;    //continue是用来终止本次循环的，也就是本次循环中continue后边的代码不会再执行，而是直接跳转到while语句的判断部分。进行下一次循环的入口判断
      
       

    }                     //循环体结束









    return  0;
}
