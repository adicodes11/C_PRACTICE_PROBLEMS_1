// Program to delete a specific line from a file

#include <stdio.h>
#include <stdlib.h>

void delete_line(char filename[], int line)
{
    char buffer[1024];
    int current_line = 1;

    FILE *fptr = fopen(filename, "r");
    FILE *temp = fopen("tempfile.txt", "w");

    // Error Handling
    if (fptr == NULL || temp == NULL)
    {
        printf("Error opening file...\n");
        exit(0);
    }

    while (!feof(fptr))
    {
        if (current_line == line)
        {
            fgets(buffer, 1024, fptr);
            current_line++;
            continue;
        }
        else
        {
            fgets(buffer, 1024, fptr);
            fputs(buffer, temp);
            current_line++;
        }
    }

    fclose(fptr);
    fclose(temp);
    remove(filename);
    rename("tempfile.txt", filename);
}

int main()
{
    char filename[20];
    int line;
    printf("Enter the file name: ");
    gets(filename);
    fflush(stdin);
    printf("Enter the line number to delete: ");
    scanf("%d", &line);

    delete_line(filename, line);

    return 0;
}