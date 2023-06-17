// Program to count the occurences of a word in a string

#include <stdio.h>
#include <string.h>

int cnt(char str)
{
    int count = 0;

    return count;
}

int main()
{
    char str[100], find[100];

    printf("Enter the string: ");
    gets(str);
    printf("Enter the string whose occurences are to be counted: ");;
    gets(str);

    int count = cnt(str);
    printf("The occurences of %s in the entered string is: %d\n", find, count);

    return 0;
}