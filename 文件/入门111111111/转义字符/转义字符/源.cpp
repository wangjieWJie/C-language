#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <string.h>
int main() {

    printf("abc\n");
    printf("D:\steam\steamapps\test\n");//t是水平制表符，被\转义了，占一个TAB的空
    printf("D:\steam\steamapps\\test\n");//\是反斜杠
    printf("老八说\'真香\'\n");//\'就是让’变成普通的引号，不具语法功能
    printf("老八说\"真香\"\n");//\'就是让"变成普通的引号，不具语法功能
    printf("%d\n", strlen("\32"));//\32表示一个字符，因为\把他转义为了一个八进制数字,,,↓↓↓↓
    //32作为8进制代表的那个十进制数字，从而（那个十进制数【26】）代表ASCII码值，并对应一个字符（是一个向右的箭头）
    printf("%c\n", '\32');//不知道为啥我的不是一个向右的箭头，不过把32改为132后能准确对应第90个字符即Z
    //注意八进制里最大的数字为7

    printf("%c\n", '\x61');//表示一个十六进制数对应十进制数对应ASCII码值的字符a



    printf("看看结果是0还是0.25 ：%f\n", 1.0 / 4);   //666   23.4.17 才发现
                                                    // 1/4 即使是打印小数也是0.0000

    return 0;

}

