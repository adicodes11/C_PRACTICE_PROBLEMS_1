// Program to calculate the circumference of a circle using command line arguments

#include<stdio.h>
#include<stdlib.h>

int main(int argc,char*argv[])
{
    float radius = atof(argv[1]);

    if(argc!=2)
    {
        printf("Arguments missing...\n");
        return 1;
    }

    printf("The circumference of the circle is %.2f\n",2*3.141592*radius);

    return 0;
}