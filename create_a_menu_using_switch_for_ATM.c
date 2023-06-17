// Program to create a menu using switch for ATM

#include<stdio.h>
#include<stdlib.h>  // exit(0) ko use krne k liye use kiya
#include<stdbool.h> // for while(true)--> true keyword use krne k liye use kiya

int main()
{
    double balance = 0, withdraw, deposit;
    int choice;

    printf("Welcome to the World Bank online portal...");

    do
    {
        printf("\n\n1.Balance Enquiry\n");
        printf("2.Deposit Amount\n");
        printf("3.Withdraw Amount\n");
        printf("0.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 0:
                printf("\n\nThank you for choosing the World Bank online services\n\n");
                exit(0);
            case 1:
                printf("The ramaining balance is %.2lf\n",balance);
                break;
            case 2:
                dep:
                printf("Enter the amount to be deposited: ");
                scanf("%lf",&deposit);
                if(deposit > 100000)
                {
                    printf("Deposition amount exceeding the daily deposit limit\n");
                    goto dep;
                }
                else
                {
                    balance += deposit;
                    printf("Available balance is %.2lf\n",balance);
                    break;
                }
            case 3:
                with:
                printf("Enter the amount to withdraw: ");
                scanf("%lf",&withdraw);
                if((balance - withdraw) < 0)
                {
                    printf("Withdrawl amount exceeding the balance amount\n");
                    goto with;
                }
                else
                {
                    balance -= withdraw;
                    printf("Available balance is %.2lf\n",balance);
                    break;
                }
            default:
                printf("Enter a valid choice!!\n");
        }
    } while (true);
    

    return 0;
}