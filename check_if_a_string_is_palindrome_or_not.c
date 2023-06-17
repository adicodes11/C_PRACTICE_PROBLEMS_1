// Program to check if the string is a pallindrome or not

#include <stdio.h>

void pall_check(char str[], int size)
{
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (str[i] == str[size - 1])
        {
            flag = 0;
        }
        else
        {
            flag = 1;
        }
        size--;
    }

    if (flag == 0)
        printf("The string is a pallindrome\n");
    if(flag == 1)
        printf("The string is not a pallindrome\n");
}

int main()
{
    char str[100];
    int n=0, i = 0;
    printf("Enter the string: ");
    gets(str);

    while (str[i] != '\0')
    {
        n++;
        i++;
    }

    pall_check(str, n);

    return 0;
}