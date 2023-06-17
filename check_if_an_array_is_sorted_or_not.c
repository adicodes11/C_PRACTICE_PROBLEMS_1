// Program to check if an array is sorted

#include<stdio.h>
#include<stdbool.h>

bool check_sorted(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[10],n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    if(check_sorted(arr,n))
    {
        printf("Entered array is sorted\n");
    }
    else
    {
        printf("Entered array is not sorted\n");
    }

    return 0;
}