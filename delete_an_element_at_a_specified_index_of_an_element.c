// Program to delete an element at a specified index of an array

#include <stdio.h>

void element_delete_array(int arr[], int *size, int index)
{
    for (int i = index; i < (*size) - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

int main()
{
    int arr[10], n, index;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index of the element to be deleted: ");
    scanf("%d", &index);

    printf("Before, displaying the array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%-2d", arr[i]);
    }
    printf("\n");
    
    element_delete_array(arr, &n, index);

    printf("After, displaying the array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%-2d", arr[i]);
    }

    return 0;
}