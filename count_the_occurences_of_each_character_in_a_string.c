// Program to count the occurrences of each character in the string

#include <stdio.h>
#include <string.h>

void count_each_char_occurrence(char str[])
{
    int slen = strlen(str), upr_count[26] = {0}, lwr_count[26]= {0}, k = 0;

    for (int i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < slen; j++)
        {
            if (i == str[j])
            {
                lwr_count[k]++;
            }
        }
        k++;
    }
    k = 0;
    for (int i = 'A'; i <= 'Z'; i++)
    {
        for (int j = 0; j < slen; j++)
        {
            if (i == str[j])
            {
                upr_count[k]++;
            }
        }
        k++;
    }

    printf("Printing the occurrences of each character in string:\n");
    for (int i = 0; i < 26; i++)
    {
        printf("%c: %d\n", i + 65, upr_count[i]);
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c: %d\n", i + 97, lwr_count[i]);
    }
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    count_each_char_occurrence(str);

    return 0;
}