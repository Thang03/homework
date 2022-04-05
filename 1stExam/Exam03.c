#include <stdio.h>

int teenArray(int arr[], int size);

int main()
{
    int arr[10];
    printf("Input your element number\n");

    for (int i = 0; i < 10; i++)
    {
        printf("\nElement number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    teenArray(arr, 10);
}

int teenArray(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
}