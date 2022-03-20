#include <stdio.h>
int main()
{
    int num1, num2;
    
    printf("Input your num1 : \n");
    scanf("%d", &num1);

    printf("Input your num2 : \n");
    scanf("%d", &num2);
    
    if (num1 > num2)
    {
        printf("The greater number is : %d\n", num1);
    }
    else
    {
        printf("The greater number is : %d\n", num2);
    }
}