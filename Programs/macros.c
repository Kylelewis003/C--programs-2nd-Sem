#include<stdio.h>

#define square(n) (n * n)

int main()
{
    int num1 , num2 , res1 , res2;
    printf("Enter two numbers : \n");
    scanf("%d%d",&num1,&num2);

    res1 = square(num1);
    res2 = square(num2);

    printf("The sum of squares of the numbers %d and %d is : %d\n",num1,num2,(res1 + res2));

    return 0;
}