#include <stdio.h>

int main()
{
    int num[5];

    num[0] = 10;
    num[1] = 50;
    num[2] = 70;
    num[3] = 90;
    num[4] = 30;

    for (int i = 0; i < 5; i++)
        printf("\n Number at [%d] is %d\n", i, num[i]);
}
