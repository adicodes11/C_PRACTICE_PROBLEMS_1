// Program to calculate the circumference of a circle

#include<stdio.h>
#define PI 3.141592

float circumference(float radius)
{
    return 2*PI*radius;
}

int main()
{
    float radius;
    printf("Enter the raidus of the circle: ");
    scanf("%f",&radius);

    printf("The circumference of the circle is: %f\n",circumference(radius));

    return 0;
}