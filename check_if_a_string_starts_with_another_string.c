// Program to check if a string starts with another string

#include <stdio.h>
#include <string.h>
#include<stdbool.h>

// Method 1
int string_starts_string_checker(char str1[], char str2[])
{
    int slen1 = strlen(str1), slen2 = strlen(str2), i = 0, flag = 0;

    if (slen1 >= slen2)
    {
        while (i != slen2)
        {
            if (str1[i] == str2[i])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
            slen2--;
            i++;
        }
    }
    else
    {
        printf("Enter a valid string1 and string2\n");
    }

    return flag;
}

// Method 2
bool string_string_start(char str1[],char str2[])
{
    int slen1= strlen(str1), slen2 = strlen(str2);

    if(slen1>=slen2)
    {
        for(int i=0;i<slen2;i++)
        {
            if(str1[i]!=str2[i])
                return false;
        }
    }
    return true;
}

int main()
{
    char str1[100], str2[100];
    printf("Enter string1: ");
    gets(str1);
    printf("Enter string2: ");
    gets(str2);

    int validator = string_starts_string_checker(str1, str2);
    if (validator == 1)
    {
        printf("The string starts with another string\n");
    }
    else
    {
        printf("The string doesn't start with another string\n");
    }

    if (string_string_start(str1,str2))
    {
        printf("The string starts with another string\n");
    }
    else
    {
        printf("The string doesn't start with another string\n");
    }

    return 0;
}