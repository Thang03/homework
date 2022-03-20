#include <stdio.h>

int main()
{
    int money;
    printf("Please input your money : \n");
    scanf("%d", &money);

    if (money <= 2000000 && money % 50 == 0)
    {
        printf("Withdraw money");
    }
    else
    {
        printf("Can't withdraw money");
    }
}