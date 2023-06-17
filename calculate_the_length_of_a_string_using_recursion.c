// Program to calculate the string length using recursion

#include <stdio.h>

int string_length_calculator(char *str)
{
    int i = 0;
    if (*str == '\0')
    {
        return 0;
    }

    return 1 + string_length_calculator(str + 1);   //Pointer arithmetic ka use kiya
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    int length = string_length_calculator(str);
    printf("The length of the string is %d\n", length);

    return 0;
}