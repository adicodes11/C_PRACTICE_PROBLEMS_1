// Program to calculate the area of a circle

#include<stdio.h>
#define PI 3.141592

void area_circle(float radius)
{
    printf("Area of the circle is: %f\n",PI*radius*radius);
}

int main()
{
    float radius;
    printf("Enter the value of the radius of the circle: ");
    scanf("%f",&radius);

    area_circle(radius);

    return 0;
}