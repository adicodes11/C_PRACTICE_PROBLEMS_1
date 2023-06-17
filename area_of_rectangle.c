// Program to calculate the area of a rectangle

#include <stdio.h>

float area_rectangle(float length, float breadth)
{
    return length * breadth;
}

int main()
{
    float length, breadth;

    printf("Enter the length: ");
    scanf("%f", &length);
    printf("Enter the breadth: ");
    scanf("%f", &breadth);

    float ar = area_rectangle(length, breadth);
    printf("The area of the rectangle is: %.2f\n", ar);

    return 00;
}