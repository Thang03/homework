#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);
int multi(int a, int b);
int divi(int a, int b);

int main()
{
    int a, b;
    float s1, s2, s3, s4;
    int op;

    printf("=========================MENU=========================\n");
    printf("1. Input Number\n");
    printf("2. Sumary\n");
    printf("3. Subsacion\n");
    printf("4. Multilipcation\n");
    printf("5. Division\n");
    printf("6. Exit!\n");

    for (int i = 0; i < 6; i++)
    {
        printf("Your choice : ");
        fflush(stdin);
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("Enter number A: \n");
            scanf("%d", &a);

            printf("Enter number B: \n");
            scanf("%d", &b);
            break;

        case 2:
            s1 = sum(a, b);
            printf("Sum = %f\n", s1);
            break;
        case 3:
            s2 = sub(a, b);
            printf("Sub = %f\n", s2);
            break;
        case 4:
            s3 = sum(a, b);
            printf("Multi = %f\n", s3);
            break;
        case 5:
            if (b == 0)
            {
                printf("Error\n");
            }
            else
                s4 = div(a, b);
            printf("Div : %f\n", s4);
            break;
        case 6:
            printf("======================Exit Menu!======================\n");
            break;
        }
    }
    return 0;
}

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

int divi(int a, int b)
{
    float s4;
    if (b == 0)
    {
        return 0;
    }
    else
    {
        s4 = (float)a / b;
    }
    return s4;
}