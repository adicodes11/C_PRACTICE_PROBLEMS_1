// Program to convert from binary to decimal

#include <stdio.h>
#include <math.h>
#include <string.h>

int binary_to_decimal(char str[])
{
    int slen = strlen(str), decimal = 0,index = 0;
    for (int i = slen - 1; i >= 0; i--)
    {
        if(str[i]=='1')
        {
            decimal += pow(2,index);    // if math.h se pow use nahi krna toh create a variable to increment in the multiples of 2
        }                               // int p2 = 1; 
        index++;                        // decimal += p2;  
    }                                   // p2*=2;
    return decimal;
}

int main()
{
    char binary[20];
    printf("Enter the binary number: ");
    scanf("%s", &binary);

    int decimal = binary_to_decimal(binary);
    printf("%s in decimal = %d\n", binary, decimal);

    return 0;
}