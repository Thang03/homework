#include <stdio.h>

int main()
{
    int x;
    x = 0;
    printf("Enter Choice(1 - 3): ");
    scanf("%d", &x);
    if (x == 1)
    {
        printf("Choice is 1 \n");
    }
    else if (x == 2)
    {
        printf("nChoice is 2 \n");
    }
    else if (x == 3)
    {
        printf("Choice is 3 \n");
    }

    else
    {
        printf("Invalid Choice \n");
    }
}