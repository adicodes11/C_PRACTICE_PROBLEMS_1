// Program to create a savings calculator with a yearly investment returns table

#include <stdio.h>

int main()
{
    double balance = 0;
    double rate_of_return = 0;
    double annual_contribution = 0;
    int total_years = 0;

    printf("-------Savings Calculator-------\n\n");

    // Initial Deposit
    do
    {
        printf("Enter initial deposit: ");
        scanf("%lf", &balance);
        if (balance <= 0)
        {
            printf("Enter valid initial deposit!!\n");
        }
    } while (balance < 0);

    // Annual Contribution
    do
    {
        printf("Enter the annual contribution: ");
        scanf("%lf", &annual_contribution);
        if (annual_contribution <= 0)
        {
            printf("Enter a valid annual contribution!!\n");
        }
    } while (annual_contribution < 0);

    // Year Rate Of Return
    do
    {
        printf("Enter the yearly rate of return: ");
        scanf("%lf", &rate_of_return);
        if (rate_of_return <= 0)
        {
            printf("Enter a valid rate of return!!\n");
        }
    } while (rate_of_return < 0);

    // Years
    do
    {
        printf("Enter the number of years: ");
        scanf("%d", &total_years);
        if (total_years <= 0)
        {
            printf("Enter valid number of years!!\n");
        }
    } while (total_years <= 0); // number of years can't be 0 in this case thus years <= 0

    for (int i = 0; i < 63; i++)
        printf("-");
    printf("\n");

    // Table headings
    printf("%4s%20s%18s%16s", "|  Year", "|   Start balance ", "|    Interest   ", "|    End balance |");
    printf("\n");

    for (int i = 0; i < 63; i++)
        printf("-");
    printf("\n");

    for (int year = 1; year <= total_years; year++)
    {
        printf("|%6d  |", year);
        printf("%16.2lf   |", balance);
        double interest = balance * (rate_of_return / 100);
        balance += interest + annual_contribution;
        printf("%12.2lf   |", interest);
        printf("%15.2lf |", balance);
        printf("\n");
    }

    for (int i = 0; i < 63; i++)
        printf("-");
    printf("\n");

    return 0;
}