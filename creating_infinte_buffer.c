// Program to create an infinte buffer

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 0, data, stop = 1;
    int *ptr = malloc(0 * sizeof(int));

    printf("Press 0 to start: ");
    scanf("%d",&stop);
    for (int i = 0; stop != 1; i++)
    {
        size = i + 1;
        ptr = realloc(ptr, (size + 1) * sizeof(int));
        printf("Enter the data: ");
        scanf("%d", &ptr[i]);

        printf("Press 1 to stop: ");
        scanf("%d", &stop);
    }
    if(stop == 1)
    {
        printf("The data entries are:\n");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", ptr[i]);
        }
    }

    return 0;
}