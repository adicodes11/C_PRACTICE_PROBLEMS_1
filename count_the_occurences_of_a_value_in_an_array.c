// Count the occurences of a value in an array

#include <stdio.h>

int cnt(int arr[], int size, int find)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == find)
        {
            count++;
        }
    }
    return count;
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

    printf("Enter the element whose occurences are to be counted: ");
    scanf("%d", &find);

    int count = cnt(arr, n, find);
    printf("The count of %d in the array is %d\n",find,count);

    return 0;
}