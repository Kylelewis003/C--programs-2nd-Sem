#include<stdio.h>

int main()
{
    int income , tax , total_tax;
    printf("Enter the Taxable Income for a year : ");
    scanf("%d",&income);

    if (income <= 250000)
    {
        tax = 0;
    }
    else if(income>250000 && income<= 500000)
    {
        tax = 0.05 * (income-250000);
    }
    else if(income>500000 && income<= 1000000)
    {
        tax = 12500 + (0.10 * (income-500000));
    }
    else if(income>1000000 && income<= 1500000)
    {
        tax = 62500 + (0.20 * (income-1000000));
    }
    else if(income>1500000 && income<= 2000000)
    {
        tax = 162500 + (0.30 * (income-1500000));
    }
    else if(income>2000000)
    {
        tax = 312000 + (0.40 * (income-2000000));
    }
    else
    {
        printf("Invalid Input \n");
        return -1;
    }

    total_tax = tax + (tax * 0.04);

    printf("The total tax for a year is : %d",total_tax);

    return 0;
}