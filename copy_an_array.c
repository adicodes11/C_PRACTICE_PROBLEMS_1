// Program to copy an array

#include<stdio.h>

int *array_copy(int arr[],int size)
{
    int *cp = malloc(size*sizeof(int));;
    for(int i = 0;i<size;i++)
    {
        cp[i]=arr[i];
    }
    return cp;
}

int main()
{
    int arr[10],n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(int i =0 ;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int *copy_arr = array_copy(arr,n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",copy_arr[i]);
    }

    return 0;
}