// Program to create our own strcat function

#include <stdio.h>
#include <string.h>

char *_strcat(char *str1, const char *str2)
{
    size_t slen1 = strlen(str1);
    size_t slen2 = strlen(str2);

    if (slen2 >= 100)
    {
        return NULL;
    }

    for (int i = 0; i < slen2; i++)
    {
        str1[i + slen1] = str2[i];
    }
    str1[slen1 + slen2] = '\0';

    return str1;
}

int main()
{
    char str1[1024], str2[1024];
    printf("Enter first string: ");
    gets(str1);
    fflush(stdin);
    printf("Enter second string: ");
    gets(str2);

    char *c = _strcat(str1, str2);
    printf("%s\n", c);

    // As the strcat() function returns a pointer to str1 thus below lines of code are to check that
    // printf("%d\n", c);
    // printf("%d\n", str1);

    return 0;
}