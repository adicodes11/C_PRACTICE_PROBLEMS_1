// Program to find the dot product

#include <stdio.h>

void dot_product(float v1[], float v2[], int size)
{
    float result[10];
    for(int i=0;i<size;i++)
    {
        result[i]=v1[i]*v2[i];
    }
    printf("( ");
    for(int i=0;i<size;i++)
    {
        printf("%g, ",v1[i]);
    }
    printf(") . ( ");

    for(int i=0;i<size;i++)
    {
        printf("%g, ",v2[i]);
    }
    printf(") = ( ");

    for(int i=0;i<size;i++)
    {
        printf("%g, ",result[i]);
    }
    printf(")");
}

    int main()
{
    float v1[10], v2[10];
    int n;
    printf("Enter the vector size: ");
    scanf("%d", &n);
    printf("Enter vector1: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &v1[i]);
    }

    printf("Enter vector2: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &v2[i]);
    }

    dot_product(v1,v2,n);

    return 0;
}