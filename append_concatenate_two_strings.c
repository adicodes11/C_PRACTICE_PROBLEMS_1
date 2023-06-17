// Program to append (concatenante) string using dynamic memory allocation

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void string_concatenator(char str1[], char str2[])
{
    char *ptr = NULL;
    int s1_length = strlen(str1), s2_length = strlen(str2);
    int slen = s1_length + s2_length + 1;
    ptr = calloc(slen, sizeof(char));
    for (int i = 0; i < s1_length; i++)
    {
        ptr[i] = str1[i];
    }
    for (int i = 0; i < s2_length; i++)
    {
        ptr[s1_length+i] = str2[i];
    }

    ptr[slen - 1]= '\0';
    puts(ptr);
    free(ptr);
}

int main()
{
    char str1[100], str2[100];
    printf("Enter string1: ");
    gets(str1);
    printf("Enter string2: ");
    gets(str2);

    string_concatenator(str1, str2);


    return 0;
}