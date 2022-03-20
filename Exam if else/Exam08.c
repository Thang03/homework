#include <stdio.h>

int main()
{
    int age;

    printf("Please input your age : \n");
    scanf("%d", &age);

    if (age == 16)
    {
        printf("You are old enough to enter class : %d\n", age);
    }
    else
    {
        printf("You are not old enough to enter class : %d\n", age);
    }

    return 0;
}