#include <stdio.h>

int main()
{
    int tea = 20000;
    int milktea = 25000;
    int coffee = 30000;
    int s1, sum = 0, c1;
    char answer;

    do
    {
        printf("================MENU=================\n");
        printf("1. tea : 20000d \n");
        printf("2. milktea : 25000d \n");
        printf("3. coffee : 30000d \n");
        fflush(stdin);

        printf("Please enter your drink : \n");
        scanf("%d", &c1);

        switch (c1)
        {
        case 1:
            printf("You choice tea : 20000 \n");
            printf("Choice amount : \n");
            scanf("%d", &s1);
            
            printf("Your buy %d tea\n", s1);
            sum += tea * s1;
            break;
        case 2:
            printf("You choice milktea : 25000 \n");
            printf("Choice amount : \n");
            scanf("%d", &s1);
            
            printf("Your buy %d milktea\n", s1);
            sum += milktea * s1;
            break;
        case 3:
            printf("You choice coffee : 30000 \n");
            printf("Choice amount : \n");
            scanf("%d", &s1);
            
            printf("Your buy %d coffee\n", s1);
            sum += coffee * s1;
            break;
        }
        printf("Your money runs out : %d\n", sum);
        
        fflush(stdin);
        printf("Do you want continue oder (Y/N)?\n");
        scanf(" %c", &answer);
        
    } while (answer == 'Y' || answer == 'y');
    
    printf("\n===========See You Again=============\n");
    return 0;
}