// Program to check if a string ends with another string

#include <stdio.h>
#include <string.h>

// Method 1
int string_end_string_checker1(char str1[], char str2[])
{
    int slen1 = strlen(str1), slen2 = strlen(str2), flag = 0;

    if (slen1 >= slen2)
    {
        for (int i = 0; i < slen1; i++)
        {
            for (int j = 0; j < slen2; j++)
            {
                if (str1[i] == str2[j]) // white is my favourite            // my favourite
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                }
            }
        }
    }
    else
    {
        printf("Enter valid string1 and string2\n");
    }

    return flag;
}
// Method 2
int string_end_string_checker(char str1[], char str2[])
{
    int slen1 = strlen(str1), slen2 = strlen(str2), flag = 0;
    if (slen1 >= slen2)
    {
        while (slen2 > 0)
        {
            if (str1[slen1 - 1] == str2[slen2 - 1])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
            slen1--;
            slen2--;
        }
    }
    else
    {
        printf("Enter valid string1 and string2\n");
    }

    return flag;
}

int main()
{
    char str1[100], str2[100];
    printf("Enter the string1: ");
    gets(str1);
    printf("Enter the string2: ");
    gets(str2);

    int validator = string_end_string_checker(str1, str2);
    if (validator == 1)
    {
        printf("The string ends with another string\n");
    }
    else
    {
        printf("The string does not end with another string\n");
    }

    return 0;
}