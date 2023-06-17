// Program to compute the average of all the elements of an array using recursion

#include <stdio.h>

float array_average_finder(int arr[], int size)
{
    if (size == -1)
        return 0;

    return arr[size] + array_average_finder(arr,size-1);
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

    float average = array_average_finder(arr, n-1);
    printf("Average: %f\n", average/n);
    return 0;
}