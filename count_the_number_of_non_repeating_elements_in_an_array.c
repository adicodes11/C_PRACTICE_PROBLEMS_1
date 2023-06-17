// Program to count the number of non repeating array elements

#include <stdio.h>

int non_repeater_counter(int arr[], int size)
{
    int count = 0,flag = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(arr[i]==arr[j] && j!=i)
            {
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
        }
        if(flag == 1)
        {
            count ++;
        }
        
        flag = 0;
    }
    return count;
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

    int count = non_repeater_counter(arr, n);
    printf("The number of non repeating array elements are: %d\n", count);

    return 0;
}
