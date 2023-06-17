#include<stdio.h>

int main()
{
    int a = 13;
    float f = 8.33;
    char c = 'c';

    printf("int a =%d\n",a);
    printf("float f =%f\n",f);
    printf("char c=%c\n",c);

    // %a.bf

    printf("%f\n",f);
    printf("%.f\n",f);
    printf("%0.5f\n",f);
    printf("%5.f\n",f);
    printf("%8.5f\n",f);
    


    return 0;
}