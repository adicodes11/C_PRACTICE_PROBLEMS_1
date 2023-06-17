// Program to check if a string is a rotation of another string

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool rotational_equality_checker(char str1[], char str2[])
{
    int slen1 = strlen(str1);
    int slen2 = strlen(str2);
    if (slen1 != slen2)
    {
        return false;
    }

    // Method Method
    char check[2 * slen1 + 1];
    strcpy(check, str1); // important
    strcat(check, str1); // important

    if (strstr(check, str2) != NULL)
    {
        return true;
    }
    return false;
    // My method
    char c;
    for (int i = 0; i < slen2; i++)
    {
        c = str2[0];
        for (int j = 0; j < slen2 - 1; j++)
        {
            str2[j] = str2[j + 1];
        }
        str2[slen2 - 1] = c;
        str2[slen2] = '\0';
        if ((strcmp(str1, str2)) == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    char str1[100] = "Aditya is a good boy";
    char str2[100] = "is a good boyAditya "; // boy k baad space nahi hai

    if (rotational_equality_checker(str1, str2))
    {
        printf("Str2 is a rotation of str1\n");
    }
    else
    {
        printf("Not\n");
    }

    return 0;
}