#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
const int mou = 50;
int main()
{
    char arr1[mou] = { 0 };
    char arr2[mou] = { 0 };
    int i = 0;
    int j = 0;
    int x = 0;
    printf("the first one\n");
    scanf("%s", arr1);
    printf("the second one\n");
    scanf("%s", arr2);
    for (i=0; i < mou; i++)
    {
        x = 0;
        for (j=0; j < mou; j++)
        {

            if (arr1[i] == arr2[j])
            {
                x += 1;
            }

        }
        if (x == 0)
        {
            printf("%c", arr1[i]);
        }
    }

    return 0;
}
