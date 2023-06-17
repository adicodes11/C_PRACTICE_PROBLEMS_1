// Program to dynamically allocate memory for an array of strings

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char **ptr = NULL, str[100];
    int slen, cont = 1, string_count = 0;

    ptr = malloc(4 * sizeof(char *));

    for (int i = 0; cont != 0; i++)
    {
        // ptr = malloc(sizeof(char *));
        printf("Enter string %d: ", i + 1);
        fgets(str, 100, stdin);
        string_count++;
        slen = strlen(str);
        str[slen - 1] = '\0'; // fgets \n ko bhi store kr lega usse hatane k liye '\0' ko shift krdiya 1 se
        ptr[i] = malloc((slen - 1) * sizeof(char));
        strcpy(ptr[i], str);

        printf("To add another string press 1 else 0: ");
        scanf("%d", &cont);
        fflush(stdin);
    }

    for (int i = 0; i < string_count; i++)
    {
        printf("%s\n", ptr[i]);
    }
    for (int i = 0; i < string_count; i++)
    {
        free(ptr[i]);
    }
    free(ptr);

    return 0;
}