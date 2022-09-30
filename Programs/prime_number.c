#include<stdio.h>

int main()
{
    int n,i,flag = 0;
    printf("Enter the number to check for prime or not : \n");
    scanf("%d",&n);

    if(n == 1)
    {
        printf("It is not a prime number\n");
        return -1;
    }

    for(i = 2 ; i<= n/2 ; i++)
    {
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("%d is not aprime number \n",n);
    }
    else
    {
        printf("%d is a prime number \n",n);
    }
    return 0;
}