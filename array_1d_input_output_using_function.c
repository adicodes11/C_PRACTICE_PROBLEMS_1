// Program to take input as well as display array using function

#include<stdio.h>

void array_input(int arr[],int size)
{
    printf("\nEnter the array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void array_output(int arr[],int size)
{
    printf("\nDisplaying the array elements: ");
    for(int i=0;i<size;i++)
    {
        printf("%-2d",arr[i]);
    }
}

int main()
{
    int arr[10],n;
    printf("Enter the array size: ");
    scanf("%d",&n);

    array_input(arr,n);
    array_output(arr,n);

    return 0;
}