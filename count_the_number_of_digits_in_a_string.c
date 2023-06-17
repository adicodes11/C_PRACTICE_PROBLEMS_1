// Program to count the number of digits in a string

#include <stdio.h>

int digit_counter(char str[])
{
    int i = 0, count = 0;
    while(str[i]!='\0')
    {
        if(str[i]>='0' && str[i]<='9')  
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

    int count = digit_counter(str);
    printf("The number of digits in the entered string is: %d\n", count);

    return 0;
}