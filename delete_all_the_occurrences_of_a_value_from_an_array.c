// Program to delete all the occurrences of a value from an array

#include <stdio.h>

void remover(int arr[], int *size, int value)
{
    for (int i = 0; i < *size; i++)
    {
        if (arr[i] == value)
        {
            for (int j = i; j < *size; j++)
            {
                arr[j] = arr[j + 1];
            }
            i--;
            (*size)--;
        }
    }
}

int main()
{
    int arr[10], n, value;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the value to be removed from the array: ");
    scanf("%d", &value);

    remover(arr, &n, value);
    for (int i = 0; i < n; i++)
    {
        printf("%-2d", arr[i]);
    }
    return 0;
}