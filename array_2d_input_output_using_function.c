// Program to take as well as display the 2D array elements using functions

#include <stdio.h>

void array_2d_input(int arr[10][10], int rows, int cols)
{
    printf("\nEnter the array elements: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void array_2d_output(int arr[10][10], int rows, int cols)
{
    printf("\nDisplaying the array elements: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%-2d", arr[i][j]);
        }
        printf("\n");
    }
    
}

int main()
{
    int arr[10][10], rows, cols;
    printf("Enter the array row size: ");
    scanf("%d", &rows);
    printf("Enter the array column size: ");
    scanf("%d", &cols);

    array_2d_input(arr, rows, cols);
    array_2d_output(arr, rows, cols);

    return 0;
}