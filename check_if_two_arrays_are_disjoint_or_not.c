// Program to check if two arrays are disjoint or not

#include <stdio.h>
#include <stdbool.h>

bool check_disjoint(int size, int arr1[], int arr2[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; i < size;j++)
        {
            if(arr1[i]==arr2[j])
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr1[10], arr2[10], n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the array1 elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the array2 elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    if (check_disjoint(n, arr1, arr2))
    {
        printf("Arrays are not disjoint\n");
    }
    else
    {
        printf("Arrays are disjoint\n");
    }

    return 0;
}