// Program to convert from decimal to binary

#include <stdio.h>
#include <stdlib.h>

void decimal_binary_converter(double decimal, char binary[])
{
    int integer_part = (int)decimal;
    float float_part = decimal - integer_part;
    int i = 0, ic, fc;
    while (integer_part > 0)
    {
        if (integer_part % 2 == 0)
            binary[i] = '0';
        else
            binary[i] = '1';
        integer_part /= 2;
        i++;
    }
    ic = i;
    for (int j = 0; j < i; j++)
    {
        char c = binary[j];
        binary[j] = binary[i - 1];
        binary[i - 1] = c;
        i--;
    }
    binary[ic] = '.';
    i = 0;
    while (float_part != 0 )
    {
        float_part *= 2;
        if (float_part >= 1)
        {
            binary[ic + i + 1] = '1';
            float_part -= 1;
        }
        else
            binary[ic + i + 1] = '0';
        
        float_part/=1;
        i++;
    }
    fc = i;
    binary[ic + fc + 1] = '\0';
}

int main()
{
    double decimal;
    char binary[100];
    printf("Enter the decimal number: ");
    scanf("%lf", &decimal);

    decimal_binary_converter(decimal, binary);
    printf("Binary: %s\n", binary);

    return 0;
}