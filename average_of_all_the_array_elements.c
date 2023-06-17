// Program to compute the average of an array

#include<stdio.h>

float averager(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }

    return (float)sum/size;
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

    printf("The average of the array is: %f\n",averager(arr,n));

    return 0;
}