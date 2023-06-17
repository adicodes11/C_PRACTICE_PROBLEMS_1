// Program to count the number of words in a string

#include <stdio.h>
#include <string.h>

int word_counter(char str[])
{
    int count = 0;
    int slen = strlen(str);
    for (int i = 0; i < slen; i++)
    {
        if (str[i] == ' ')
        {
            count++;
            continue;
        }
    }
    return count+1; // count+1 kiya bcz last character k baad loop nhi kr rha + also last character k baad null character hai space nahi
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    int count = word_counter(str);
    printf("Word count: %d\n", count);

    return 0;
}