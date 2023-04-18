#define _CRT_SECURE_NO_DEPRECATE 1

#include"head.h"
/*         *
          ***
         *****

*/

int main() {
    //int ROW = 51;

    int i = 0;
    int j = 0;
    for (i = 1; i <= ROW / 2+1; i++)
    {
        WJNB(i);
    }
    for (j = ROW / 2; j > 0; j--)
    {
        WJNB(j);
    }



    return 0;
}   