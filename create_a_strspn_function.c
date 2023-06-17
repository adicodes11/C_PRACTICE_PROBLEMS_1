// Program to create a strspn i.e., string span function

#include <stdio.h>
#include <string.h>

size_t _strspn(const char *str1, const char *str2)
{
    size_t length = 0;
    size_t slen1 = strlen(str1);
    size_t slen2 = strlen(str2);

    for (size_t i = 0; i < slen1; i++)
    {
        for(size_t j = 0;j<slen2;j++)
        {
            if(str1[i]==str2[j])
            {
                length++;
            }
        }
    }

    return length;
}

int main()
{
    char str1[100], str2[100];
    printf("Enter string1: ");
    gets(str1);
    printf("Enter string2: ");
    gets(str2);

    size_t length = _strspn(str1, str2);
    printf("The count of character segment is %zu\n", length);

    return 0;
}