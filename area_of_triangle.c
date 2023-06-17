// Program to calculate the area of a triangle

#include <stdio.h>
#include <math.h>

float area_triangle(float a, float b, float c)
{
    float s = (a + b + c) / 2.0;
    float area ;
    a = s - a;
    b = s - b;
    c = s - c;
    area = sqrtf(s * a * b * c);

    return area;
}

int main()
{
    float a, b, c;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    float ar = area_triangle(a, b, c);
    printf("Area of the triangle is: %.2f\n", ar);

    return 0;
}