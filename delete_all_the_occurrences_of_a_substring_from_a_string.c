// Program to delete all occurrences of a substring from a string

#include <stdio.h>
#include <string.h>

void substring_remover(char str[], char substr[])
{
    int slen = strlen(str);
    int subslen = strlen(substr);
    int i = 0;

    while (i < slen)
    {
        if (strstr(&str[i], substr) == &str[i])
        {
            slen -= subslen;
            for (int j = i; j < slen; j++)
            {
                str[j] = str[j + subslen];
            }
        }
        else
        {
            i++;
        }
    }
    str[strlen(str)] = '\0';
}

int main()
{
    char str[100], substr[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';
    printf("Enter the substring: ");
    fgets(substr, 100, stdin);
    substr[strlen(substr) - 1] = '\0';

    substring_remover(str, substr);
    printf("String after removal: %s\n", str);

    return 0;
}