// Program to create your own tolower() function

#include<stdio.h>

void to_lower(char str[])
{
    int i = 0;
    char temp[100];

    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=(str[i]+32);
        }
        i++;
    }
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    to_lower(str);
    puts(str);

    return 0;
}