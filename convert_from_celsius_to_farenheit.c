// Convert Celsius to Fahreheit

#include<stdio.h>

float converter(int c)
{
    float f;
    f = (c*(9/5.0))+32 ;

    return f;
}

int main()
{
    float c;
    printf("Enter the Celsius value: ");
    scanf("%f",&c);

   printf("The value in Fahrenheit is: %f\n",converter(c));
    return 0;
}