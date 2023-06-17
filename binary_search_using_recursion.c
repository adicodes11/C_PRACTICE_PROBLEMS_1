// Perform to perform binary search using recursion

#include <stdio.h>

int binary_search(int arr[],int find,int low, int high)
{
    if(low>high)
    {
        return -1;
    }

    int mid = low + (high-low)/2;

    if(arr[mid]==find)
    {
        return mid;
    }
    else if(arr[mid]>find)
    {
        return binary_search(arr,find,low,mid-1);
    }
    else
    {
        return binary_search(arr,find,mid+1,high);
    }

}

int main()
{
    int arr[10], n, find, low, high;
    printf("Enter the array size: ");
    scanf("%d", &n);
    low = 0;
    high = n - 1;

    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the search: ");
    scanf("%d",&find);

    int index = binary_search(arr,find,low,high);
    if(index>=0)
    {
        printf("%d is found at index %d\n",find,index);
    }
    else
    {
        printf("%d not found\n",find);
    }

    return 0;
}