// Program to calculate the number of punctuation marks in a string

#include <stdio.h>
#include <string.h>
#include<ctype.h>

int cnt(char str[])
{
    int count = 0;
    int slen = strlen(str);
    for (int i = 0; i < slen; i++)
    {
        if (ispunct(str[i]))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    int count = cnt(str);
    printf("The number of punctuations are: %d\n",count);

    return 0;
}