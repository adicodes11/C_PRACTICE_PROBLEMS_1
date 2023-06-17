// Program to display a 2D array

#include<stdio.h>

void print_2d_array(int arr[10][10],int rows,int cols)
{
    printf("Displaying the array elements\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%-2d",arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[10][10],rows,cols;
    printf("Enter the array row size: ");
    scanf("%d",&rows);
    printf("Enter the array column size: ");
    scanf("%d",&cols);

    printf("Enter the array elements: ");
    for(int i =0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    print_2d_array(arr,rows,cols);

    return 0;
}