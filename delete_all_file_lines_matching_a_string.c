// Program to delete all file lines that match a string

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

void string_remover(char filename[], char str[]);

int main()
{
    char filename[20], str[100];
    printf("Enter the file name: ");
    fgets(filename, 20, stdin);
    filename[strlen(filename) - 1] = '\0';
    printf("Enter the string to be removed entirely from the file: ");
    fgets(str, 100, stdin);

    string_remover(filename, str);

    return 0;
}

void string_remover(char filename[], char str[])
{
    char buffer[BUFFER_SIZE];
    char tempfilename[20];
    strcpy(tempfilename, "_temp.txt");
    strcat(tempfilename, filename);

    FILE *file = fopen(filename, "r");
    FILE *temp = fopen(tempfilename, "w");

    // Error handling
    if (file == NULL || temp == NULL)
    {
        printf("Error opening file...\n");
        fclose(file);
        fclose(temp);
        exit(0);
    }

    while (!feof(file))
    {
        fgets(buffer, BUFFER_SIZE, file);

        if (strcmp(buffer, str) != 0)
            fputs(buffer, temp);
    }

    fclose(file);
    fclose(temp);
    remove(filename);
    rename(tempfilename, filename);
}

// File content:

// Line 1
// Line 2
// Line 3
// Line 2
// Line 5
// Line 2
//          // this line also imp