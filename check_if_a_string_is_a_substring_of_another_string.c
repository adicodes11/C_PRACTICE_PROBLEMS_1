// Program to check if a string is a substring of another string

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool substring_checker(char *str1, char *str2)
{
    int slen1 = strlen(str1);
    int slen2 = strlen(str2);
    int flag = 0;
    if (slen1 > slen2)
    {
        return false;
    }

    for (int i = 0; i < slen1; i++)
    {
        for (int j = 0; j < slen2 + 1; j++)     // yeh j < slen2 + 1 wale logic ka kuch sochna toh
        {
            if (str1[i] == str2[j])
            {
                flag = 1;
                i++;
            }
            else
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char str1[100], str2[100];

    printf("Enter string1: ");
    fgets(str1, 100, stdin);
    str1[strlen(str1) - 1] = '\0';
    printf("Enter string2: ");
    fgets(str2, 100, stdin);
    str2[strlen(str2) - 1] = '\0';

    if (substring_checker(str1, str2))
    {
        printf("String1 is a substring of string2\n");
    }
    else
    {
        printf("String1 is not a substring of String2\n");
    }

    return 0;
}