// Program to create our own strncpy function

#include <stdio.h>
#include <string.h>

char *_strncpy(char *dest, const char *source, size_t n)
{
    size_t i = 0;
    if (dest == NULL || source == NULL || n == 0)
    {
        return dest;
    }
    while (i < n && source[i] != '\0')
    {
        dest[i] = source[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest;
}

int main()
{
    size_t n;
    char str[100], buffer[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    int slen = strlen(str);
    str[slen - 1] = '\0';
    printf("Enter the number of characters to copy: ");
    scanf("%zu", &n);

    char *ptr = _strncpy(buffer, str, n);
    printf("Copy: %s\n", buffer);

    // As the strncpy() function returns a pointer to the destination thus was checking that
    // printf("Destination: %p\n", buffer);
    // printf("Pointer: %p\n", ptr);

    return 0;
}