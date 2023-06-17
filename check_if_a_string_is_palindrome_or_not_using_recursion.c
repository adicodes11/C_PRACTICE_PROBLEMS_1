// Program to check if a string is a palindrome using recursion

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool pallindrome_checker(char str[], int left, int right)
{
    if (left >= right)      // if string comparsion done inside the else if statement last tkk equal hua toh pallindrome hoga
    {
        return true;
    }
    else if (str[left] == str[right - 1])
    {
        return pallindrome_checker(str, left + 1, right - 1);
    }
    else
    {
        return false;   // if  string comparsion done inside the else if statement kahi pr equal nahi hua toh last>=right hoga hi nahi issliye return false krdege
    }
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    if (pallindrome_checker(str, 0,strlen(str)))
    {
        printf("Entered string is a pallindrome\n");
    }
    else
    {
        printf("Entered string is not a pallindrome\n");
    }

    return 0;
}