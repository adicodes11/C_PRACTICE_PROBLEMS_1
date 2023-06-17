// Program to calculate the area of rectangle using command line arguments

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc!=3)
    {
        printf("Arguments missing...\n");
        exit(4);
    }
    float length, breadth;


    length = atof(argv[1]);
    breadth = atof(argv[2]);

    printf("The area of the rectangle is %.2f", length * breadth);

    return 0;
}