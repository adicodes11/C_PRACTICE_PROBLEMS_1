// Program to convert a string's uppercase characters to lowercase and vice versa

#include<stdio.h>
#include<ctype.h>
#include<string.h>

void converter(char str[])
{
    int slen = strlen(str);
    for(int i = 0;i<slen; i++)
    {
        if(islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        else if(isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }   
}


int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);
    printf("The initial string is: %s\n",str);

    converter(str);
    printf("The converted string is: %s\n",str);
    return 0;
}