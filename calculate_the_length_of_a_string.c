//  Program to manually find the length of a string

#include <stdio.h>

int strlength(char str[])
{
    int i = 0;
    while (str[i] != 0)
    {
        i++;
    }
    return i;
}

int main()
{
    char str[100];
    int n;
    printf("Enter the string: ");
    gets(str);

    n = strlength(str);
    printf("The lenght of the string is: %d\n", n);

    return 0;
}