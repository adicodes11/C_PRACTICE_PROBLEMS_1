// Program to check if an integer is even or odd

#include<stdio.h>

void checker(int n)
{
    if(n%2==0)
    {
        printf("%d is an even integer\n",n);
    }
    else
    {
        printf("%d is an odd integer\n",n);
    }
}

int main()
{
    int n;
    printf("Enter the number to be checked: ");
    scanf("%d",&n);

    checker(n);

    return 0;
}