// Program to count the number of vowels in a string using recursion

#include <stdio.h>

int vowel_counter(char *str)
{
    if (*str == '\0')
    {
        return 0;
    }
    if (*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' || *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
    {
        return 1 + vowel_counter(str + 1);
    }
    else
    {
        return vowel_counter(str+1);
    }
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    int count = vowel_counter(str);
    printf("The number of vowels in the string are %d\n", count);

    return 0;
}