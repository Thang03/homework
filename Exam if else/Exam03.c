#include <stdio.h>

void main()
{
    int res, num;
    printf("PLease input number : \n");
    scanf("%d", &num);

    res = num % 2;
    if (num == 2)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
}