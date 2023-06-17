// Program to convert a string into an only digit string

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void only_digit_maker(char str[])
{
    int slen = strlen(str);

    for (int i = 0; i < slen; i++)
    {
        if (!isdigit(str[i]))
        {
            for (int j = i; j < slen ; j++)
            {
                str[j] = str[j + 1];
            }
            i--;
            slen--;
        }
    }
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);

    only_digit_maker(str);
    printf("String after removal: %s\n", str);

    return 0;
}