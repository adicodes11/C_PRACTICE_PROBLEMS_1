// Program to concatenate two arrays

#include<stdio.h>

void array_concatenate(int arr1[],int n1,int arr2[],int n2, int res[])
{
    for(int i=0;i<n1;i++)
    {
        res[i]=arr1[i];
    }
    for(int i =0;i<n2;i++)
    {
        res[i+n2]=arr2[i];
    }
}

int main()
{
    int arr1[10],arr2[10],n1,n2,res[20];
    printf("Enter the array1 size: ");
    scanf("%d",&n1);
    printf("Enter the array1 elements: ");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the array2 size: ");
    scanf("%d",&n2);
    printf("Enter the array2 elements: ");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }

    array_concatenate(arr1,n1,arr2,n2,res);
    printf("Displaying the concatenated array\n");
    for(int i=0;i<n1+n2;i++)
    {
        printf("%-2d",res[i]);
    }


    return 0;
}