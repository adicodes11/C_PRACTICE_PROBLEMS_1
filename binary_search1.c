// Program tto perform binary search

#include <stdio.h>

void binary_search(int arr[], int size, int find)
{
    int low = 0, mid, high = size, flag = 0;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (arr[mid] == find)
        {
            flag = 1;
            break;
        }
        else if (arr[mid] > find)
        {
            high = mid - 1;
        }
        else if (arr[mid] < find)
        {
            low = mid + 1;
        }
    }
    if( flag == 1)
    {
        printf("%d is found at index %d\n",find,mid);
    }
    else
    {
        printf("%d not found\n",find);
    }

}

int main()
{
    int arr[10], n, find;

    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the search: ");
    scanf("%d", &find);

    binary_search(arr, n, find);

    return 0;
}