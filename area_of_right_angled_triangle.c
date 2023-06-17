// Program to calculate the area of a right triangle

#include <stdio.h>

float area_Rtriangle(float base, float height)
{
    return 0.5 * base * height;
}

int main()
{
    float base, height;
    printf("Enter the base: ");
    scanf("%f", &base);
    printf("Enter the height: ");
    scanf("%f", &height);

    float ar = area_Rtriangle(base, height);
    printf("The are of the right angled triangle is: %.2f\n", ar);

    return 0;
}