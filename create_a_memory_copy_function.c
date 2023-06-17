// Program to create a memory copy function

#include <stdio.h>

char *memory_copy(char source[], char destination[], int n)
{
    int i = 0;
    while (source[i] != '\0')
        i++;
    for (int j = 0; j < n; j++)
    {
        destination[j] = source[j];
    }
    destination[n]='\0';

    return destination;
}

int main()
{
    char source[100], destination[100];
    int n;
    printf("Enter the source string: ");
    gets(source);
    printf("Enter the number of characters to copy: ");
    scanf("%d", &n);

    char *dest_ptr = memory_copy(source, destination, n);
    printf("Destination string: %s\n", destination);
    printf("Destination address: %p\n", destination);
    printf("Dest_ptr: %p\n", dest_ptr);

    return 0;
}