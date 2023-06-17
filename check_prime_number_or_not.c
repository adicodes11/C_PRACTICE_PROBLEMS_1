// Program to check if a number is prime or not

#include <stdio.h>
#include <stdbool.h>

bool prime_checker(int n)
{
    if (n == 1)
    {
        printf("1 is neither prime nor composite\n");
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (prime_checker(n))
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);

    return 0;
}