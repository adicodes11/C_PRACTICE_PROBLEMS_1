// Program to calculate the area of the circle

#include<stdio.h>

float area_square(float side)
{
    return side*side;
}

int main()
{
    float side;
    printf("Enter the value of the side of the square: ");
    scanf("%f",&side);

    printf("Area of the square is %.2f\n",area_square(side));

    return 0;
}