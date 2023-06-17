// Program to convert vowels in a string to uppercase

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// My method

void vowel_uppercase_converter(char str[])
{
    int slen = strlen(str);
    // using fall through of the switch statement
    for (int i = 0; i < slen; i++)
    {
        switch (str[i])
        {
        case 'a':
            str[i] = 'A';
            break;
        case 'e':
            str[i] = 'E';
            break;
        case 'i':
            str[i] = 'I';
            break;
        case 'o':
            str[i] = 'O';
            break;
        case 'u':
            str[i] = 'U';
            break;
        }
    }
}

// Method 2

void converter(char str[])
{
    int slen = strlen(str);
    for (int i = 0; i < slen; i++)
    {
        if (islower(str[i]))
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                str[i]= toupper(str[i]);
            }
        }
    }
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    // vowel_uppercase_converter(str);  // My method
    converter(str);
    printf("Printing the converted string:\n");
    puts(str);

    return 0;
}