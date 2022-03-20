#include <stdio.h>

int main()
{
    int salary, taxSalary, netSalary;

    printf("Please input your salary : \n");
    scanf("%d", &salary);

    if (salary > 15000000)
    {
        taxSalary = salary * 30 / 100;
    }
    else if (7000000 < salary <= 15000000)
    {
        taxSalary = salary * 20 / 100;
    }
    else
    {
        taxSalary = salary * 10 / 100;
    }

    netSalary = salary - taxSalary;

    printf("Your netSalary : %d\n", netSalary);
    printf("your taxSalary : %d\n", taxSalary);

    return 0;
}