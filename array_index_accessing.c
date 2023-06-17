// Program to access array elements

#include<stdio.h>

int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9};

    for(int i=0;i<10;i++)
    {
        printf("arr[%d]: %d\n",i,i[arr]);     // arr[i] => i[arr]
    }

    return 0;
}