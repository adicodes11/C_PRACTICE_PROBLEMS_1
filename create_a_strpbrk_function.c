// Program to create a strpbrk() function

#include <stdio.h>

char *_strpbrk(char *string1, char *string2)
{
    if (string1 == NULL || string2 == NULL)
    {
        return NULL;
    }
    char *temp = string2;
    while (*string1 != '\0')
    {
        temp = string2;
        while (*temp != '\0')
        {
            if (*string1 == *temp)
            {
                return string1;
            }
            temp++;
        }
        string1++;
    }

    return NULL;
}

int main()
{
    char str1[100], str2[100];
    printf("Enter the first string: ");
    gets(str1);
    fflush(stdin);
    printf("Enter the second string: ");
    gets(str2);

    char *c = _strpbrk(str1, str2);
    printf("%s\n", c);

    // As the strpbrk() function returns a pointer to the first matched character in string1 to string2 thus was checking this
    // for (int i = 0; str1[i] != '\0'; i++)
    //     printf("%d\n", &str1[i]);
    // printf("%d\n", c);

    return 0;
}