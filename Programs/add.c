#include<stdio.h>

int add(int x , int y);

int add(x , y)
{
    int sum = 0;
    sum = x + y;
    return sum;
}

int main()
{
    int a , b , res;
    printf("Enter number 1 : \n");
    scanf("%d",&a);
    printf("Enter number 2 : \n");
    scanf("%d",&b);
    res = add(a , b);
    printf("The sum of %d and %d is : %d \n",a,b,res);
    return 0;
}