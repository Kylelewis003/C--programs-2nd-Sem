#include<stdio.h>

int main()
{
    int a,b,res;
    char op;
    printf("Enter two numbers : \n");
    scanf("%d%d",&a,&b);
    printf("Enter the arithmetic operator : \n");
    scanf(" %c",&op);

    if(op == '+')
    {
        res = a+b;
        printf("The sum of %d and %d is : %d",a,b,res);
    }

    else if(op == '-')
    {
        res = a-b;
        printf("The subtraction of %d and %d is : %d",a,b,res);
    }

    else if(op == '*')
    {
        res = a*b;
        printf("The multiplication of %d and %d is : %d",a,b,res);
    }

    else if(op == '/')
    {
        if(b == 0)
        {
            printf("Invalid input \n");
            return 9;
        }
        else
        {
            res = a/b;
            printf("The division of %d and %d is : %d",a,b,res);
        }
    }

    else if(op == '%')
    {
        if(b == 0)
        {
            printf("Invalid input \n");
            return 9;
        }
        else
        {
            res = a%b;
            printf("The division of %d and %d is : %d",a,b,res);
        }
    }

    else
    { 
        printf("Pleasr enter a valid operator\n");
        return 5;
    }

    return 0;
}