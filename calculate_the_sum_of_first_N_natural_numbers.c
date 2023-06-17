// Program to find the sum of first N natural numbers

#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sum(n - 1);
}

int main()
{
    int n, result = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    result = sum(n);
    printf("The sum of the first %d natural numbers is: %d\n",n,result);

    return 0;
}