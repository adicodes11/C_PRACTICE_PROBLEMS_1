// Program to count the number of vowels and consonants in a string

#include <stdio.h>
#include<string.h>

void counter(char str[])
{
    int count_vowels = 0, count_consonants = 0;
    int size = strlen(str);
    for(int i=0;i<size;i++)
    {
         if ((str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U') || (str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
        {
            count_vowels++;
        }
        else
        {
            count_consonants++;
        }
    }
    printf("The number of vowels in the string are: %d\n", count_vowels);
    printf("The number of consonants in the string are: %d\n", count_consonants);
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    counter(str);

    return 0;
}