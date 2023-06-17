// Program to make all string letters to lowercase

#include<stdio.h>
// #include<string.h>  // direct method k liye
#include<ctype.h>

void string_lowercase_converter(char str[])
{
    // direct method
    // str = strlwr(str);

    // another method
    int i = 0;
    while(str[i]!='\0')
    {
        if(isupper(str[i]))
        {
            str[i]=tolower(str[i]);
        }
        i++;
    }
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);
    printf("Before: %s\n",str);

    string_lowercase_converter(str);
    printf("After: %s\n",str);

    return 0;
}