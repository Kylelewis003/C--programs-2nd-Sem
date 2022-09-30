#include<stdio.h>

void main()
{
    int n;
    printf("Enter the range of numbers : \n");
    scanf("%d",&n);
    fibonacci(n);
}

void fibonacci(n)
{

    int a = 0 , b = 1 , c;
    while(a<=n)
    {
        c = a+b;
        printf("%d ",c);
        a = b;
        b = c;
        c = a;
    }

}