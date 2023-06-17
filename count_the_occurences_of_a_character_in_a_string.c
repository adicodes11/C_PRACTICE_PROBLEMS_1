// Program to count the occurences of a character in a string

#include<stdio.h>
#include<string.h>

int cnt(char str[],char find)
{
    int slen = strlen(str),count = 0;

    for(int i=0;i<slen;i++)
    {
        if(str[i]==find)
        {
            count ++;
        }
    }
    return count ;
}

int main()
{
    char str[100],find;
    printf("Enter the string: ")    ;
    gets(str);
    printf("Enter the character whose occurences are to be checked: ");
    scanf("%c",&find);

    int count = cnt(str,find);
    printf("The occurences of '%c' in the entered string are: %d\n",find,count);

    return 0;
}