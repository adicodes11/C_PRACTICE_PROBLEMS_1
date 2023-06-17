// Program to create compute the average of an arrya using recursion

#include <stdio.h>

float average(int arr[], int size)
{
    if (size == 1)
    {
        return arr[size - 1];
    }

    // (1 + 2 + 3 + 4 + 5) / 5 = avg
    // (1 + 2 + 3 + 4) / 4 = avg
    // (1 + 2 + 3 + 4) = avg * 4

    return (average(arr, size - 1) * (size - 1) + arr[size - 1]) / size;
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

    float avg = average(arr, n);
    printf("The average is: %g\n", avg);

    return 0;
}