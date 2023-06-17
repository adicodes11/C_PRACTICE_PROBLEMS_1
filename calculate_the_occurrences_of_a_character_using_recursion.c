// Program to calculate the occurrences of a character in a string using recursion

#include<stdio.h>
#include<string.h>

int char_occurrence_counter(char *str,char c)
{
    if(*str=='\0')
    {
        return 0;
    }

    if(*str == c)
    {
        return (1+ char_occurrence_counter((str +1),c));
    }
    else
    {
        return char_occurrence_counter(str+1,c);  //using pointer arithmetic travesring the string
    }
}

int main()
{
    char str[100],c;
    printf("Enter the string: ");
    gets(str);
    fflush(stdin);
    printf("Enter the character whose occurrence is to be calculated: ");
    scanf("%c",&c);

    int count = char_occurrence_counter(str,c);
    printf("The occurrence count of %c is: %d\n",c,count);

    return 0;
}