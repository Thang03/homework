#include <stdio.h>

int main()
{
    int pin = 123;
    int mypin;
    int limit = 0;
    int lc, sp = 5000000, salary, sdc1;
    char ans;

    do
    {
        printf("Input your pin number : \n");
        scanf("%d", &mypin);
        limit++;
    } while (mypin != pin && limit < 3);

    if (mypin == pin)
    {
        printf("Logged in successfully \n");
        do
        {
            ans = 'y';
            printf("Select request : \n");
            scanf("%d", &lc);
            switch (lc)
            {
            case 1:
                printf("Your balance : %d\n", sp);
                printf("Enter withdraw fund : ");
                scanf("%d", &salary);
                sdc1 = sp - salary;
                
                printf("The remaining balance : %d\n", sdc1);
                break;

            case 2:
                printf("Your balance : %d\n", sp);
                printf("Enter withdraw fund : ");
                scanf("%d", &salary);
                sdc1 = sp - salary;
                
                printf("Amount trasferred : %d\n", salary);
                printf("The remaining balance : %d\n", sdc1);
                break;
            case 3:
                printf("Your balance : %d\n", sp);
                break;
            }
            printf("Enter the answer (Y/N) ?\n:");
            fflush(stdin);
            scanf(" %c", &ans);
        } while (ans == 'Y' || ans == 'y');
    }
    else
    {
        printf("Card has been locked.\n");
    }
    printf("================See You Again====================");

    return 0;
}