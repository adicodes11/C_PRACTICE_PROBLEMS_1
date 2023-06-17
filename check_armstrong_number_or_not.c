// Program to if a number is an armstrong number or not

#include <stdio.h>

void check_armstrong(int n)
{
    int sum = 0, temp = n;
    while (n > 0)
    {
        sum = sum + (n % 10) * (n % 10) * (n % 10);
        n /= 10;
    }
    if (sum == temp)
    {
        printf("%d is an armstrong number\n", temp);
    }
    else
    {
        printf("%d is not an armstrong number\n", temp);
    }
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    check_armstrong(n);

    return 0;
}