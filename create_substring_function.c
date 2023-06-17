// Program to create a substring function

#include<stdio.h>
#include<string.h>

void substring_finder(char str[],char sub_string[],int index,int length)
{
    int slen = strlen(str);

    if(index>slen || index < 0 || length > slen)
    {
        printf("Please enter a valid index and length: ");
    }
    for(int i= 0;i<length;i++)
    {
        sub_string[i]=str[index+i];
    }
    sub_string[length] = '\0';
}

#include<stdio.h>
int main()
{
    char str[100],sub_string[100];
    int index,length;
    printf("Enter a string: ");
    gets(str);
    printf("Enter the substring index and length: ");
    scanf("%d %d",&index,&length);

    substring_finder(str,sub_string,index,length);
    puts(sub_string);

    return 0;
}