// Program to convert kms to miles

#include<stdio.h>

void convert(double first, double last)
{
    for(double i = first;i<= last ;i++)
    {
        printf("%lf\n",i*0.621371);
    }
}

int main()
{
    double first, last;
    printf("Enter the km range: ");
    scanf("%lf %lf",&first,&last);

    convert(first,last);

    return 0;
}