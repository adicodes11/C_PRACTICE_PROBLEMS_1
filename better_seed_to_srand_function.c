// Program to add a better seed to the srand() function

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> //harr process ki alag process id hoti hai toh ek hi second pr chahe time(NULL) se same number q na mile
                    // but process id toh harr second pr bhi differnt hogi... that's what we gonna use

int main()
{
    srand(time(NULL) * getpid());
    int num;

    for(int i=0;i<10;i++)
    {
        num = rand() %100;
        printf("Rand %d: %d\n",i+1,num);
    }

    // We can also print the process id as:
    printf("Process id: %d\n",getpid());

    return 0;
}
