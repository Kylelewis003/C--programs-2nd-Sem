#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the first number : \n");
    scanf("%d",&m);
    printf("Enter the first number : \n");
    scanf("%d",&n);

    if(m%n==1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}