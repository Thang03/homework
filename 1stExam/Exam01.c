#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);
int multi(int a, int b);
float division(int a, int b);

int sum(int a, int b)
{
    int s1;
    s1 = a + b;

    return s1;
}
int sub(int a, int b)
{
    int s2;

    s2 = a - b;

    return s2;
}
int multi(int a, int b)
{
    int s3;

    s3 = a * b;

    return s3;
}
float division(int a, int b)
{
    int s4;

    s4 = a / b;

    return s4;
}

int main()
{
    int a, b;
    int s1, s2, s3, s4;
    char op;

    printf("==========================MENU============================\n");
    printf("sum");
    printf("sub");
    printf("multi");
    printf("division");
    printf("Out program");
    printf("==========================================================\n");
    for (int i = 1; i < 7; i++)
    {
        printf("Please Choose: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Input your num a: ");
            scanf("%d", &a);
            printf("input your num b: ");
            scanf("%d", &b);
            break;
        case 2:
            s1 = sum(a, b);
            printf("sum: %d\n", s1);
            break;
        case 3:
            s2 = sub(a, b);
            printf("sub: %d\n", s2);
            break;
        case 4:
            s3 = multi(a, b);
            printf("multi: %d\n", s3);
            break;
        case 5:
            s4 = division(a, b);
            printf("Division: %f\n", s4);
            break;
        case 6:
            printf("Out Program.\n");
        }
}