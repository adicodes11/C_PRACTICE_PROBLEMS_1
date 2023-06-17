// Program to check if a number is a palindrome number or not

#include <stdio.h>

void check_palindrome(int n)
{
    int rev = 0, temp = n;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (temp == rev)
    {
        printf("%d is a Palindrome number\n",temp);
    }
    else
    {
        printf("%d is not a Palindrome number\n",temp);
    }
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    check_palindrome(n);

    return 0;
}