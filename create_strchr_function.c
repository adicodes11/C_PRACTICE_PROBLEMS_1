// Program to create strchr() function

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char *_strchr(const char *str, int check)
{
    while (*str != '\0')
    {
        if (*str == check)
        {
            return (char *)str;
        }
        str++;
    }

    return NULL;
}

int main()
{
    char str[100], check;
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';
    printf("Enter the check char: ");
    scanf("%c", &check);

    char *c = _strchr(str, check);
    if (c != NULL)
    {
        printf("The first occurrence of %c is from: %s\n", check, c);
    }

    return 0;
}