// Program to find the count of the number of unique elements in an array

#include <stdio.h>

int unique_elements_counter(int arr[], int size)
{
    int flag = 0;
    int unique_count = 0;

    for (int i = 0; i < size; i++)
    {
        flag = 0;
        for (int j = 0; j < size; j++)      // j= i+1 krna incorrect technique hai try krke dekh lena for arr[]={1,1,1,1,1}; unique_count = 1 ayega jo ki galat hai
        {
            if (arr[i] == arr[j] && i != j)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            unique_count++;
        }
    }
    return unique_count;
}

int main()
{
    int arr[10], n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = unique_elements_counter(arr, n);
    printf("The number of unique elements in this array are: %d\n", count);

    return 0;
}