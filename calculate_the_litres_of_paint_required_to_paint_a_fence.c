// Program to calculate the litres of paint required to paint a fence

#include<stdio.h>

double paint_measurer(double length,double height)
{
    const double cost_per_metres_sq = 5.0;
    double area = length *height ;

    return area/cost_per_metres_sq;
}

int main()
{
    double length, height, litres;
    printf("Enter length: ");
    scanf("%lf",&length);
    printf("Enter height: ");
    scanf("%lf",&height);

    litres = paint_measurer(length,height);
    printf("Paint required: %.2lf lits.\n",litres);

    return 0;
}