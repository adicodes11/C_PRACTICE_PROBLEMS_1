// Program to create a string copy function

#include <stdio.h>

char *string_copy(char str2[], char str1[])
{
    int i = 0;
    while (str1[i] != '\0')
        i++;
    for (int j = 0; j < i; j++)
    {
        str2[j] = str1[j];
    }
    str2[i] = '\0';

    // Since strcpy returns a pointer to the destination string
    return str2;
}

int main()
{
    char str1[100], str2[100];
    printf("Enter the string1: ");
    gets(str1);

    char *str2_ptr = string_copy(str2, str1);
    printf("String 2: %s\n", str2);
    printf("%p\n",str2);
    printf("%p\n",str2_ptr);

    return 0;
}