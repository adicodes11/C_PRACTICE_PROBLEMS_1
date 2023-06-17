// Program to implement Bubble Sort

#include <stdio.h>

void bubble_sort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size-1 ; i++)
    {
        for(int j = 0;j<size;j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("After sorting: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[10], n;
    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubble_sort(arr, n);

    return 0;
}