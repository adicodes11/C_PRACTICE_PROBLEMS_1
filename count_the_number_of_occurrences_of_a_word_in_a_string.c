// Program to count the occurrences of a word in a string

#include <stdio.h>
#include <string.h>

int word_occurrences_counter(char str[], char find[])
{
    int count = 0, flag = 0,j = 0;
    int slen = strlen(str);
    int wlen = strlen(find);

    for (int i = 0; i < slen; i++)
    {
        while(find[j]!='\0')
        {
            if(str[j+i]==find[j])
            {
                flag = 1;
            }
            else if(str[i]==' ')
            {
                continue;
            }
            else
            {
                flag = 0;
                break;
            }
            j++;
        }
        if(flag == 1)
        {
            count ++;
        }
    }
    return count;
}

int main()
{
    char str[100], find[100];
    printf("Enter the string: ");
    gets(str);
    printf("Enter the word: ");
    gets(find);

    int count = word_occurrences_counter(str, find);
    printf("The occurrences of \"%s\" in the string are: %d\n", find);

    return 0;
}