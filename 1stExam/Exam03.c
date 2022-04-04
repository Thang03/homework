#include <stdio.h>

int main()
{
    int i, arr[10];
    for (i = 0; i < 10; i++)
    {
        printf("\nGia tri cua phan tu thu %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 10; i > 0; i--)
    {
        scanf("\n%d", arr[i]);
    }
}