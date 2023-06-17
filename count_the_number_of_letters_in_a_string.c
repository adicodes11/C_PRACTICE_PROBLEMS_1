// Program to count the number of letters in a string

#include <stdio.h>
// #include<ctype.h>

int letter_counter(char str[])
{
    int i = 0, count = 0;
    while(str[i]!='\0')
    {
        // if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
        // if(isalpha(str[i]))
        if(str[i]!=' ')
        {
            count ++;
        }
        i++;
    }
    return count;
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    int count = letter_counter(str);
    printf("The number of letters in the entered string are: %d\n",count);

    return 0;
}