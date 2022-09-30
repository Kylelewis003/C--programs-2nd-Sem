#include<stdio.h>

int main()
{
    int n,temp,dig,i,sum = 0;
    printf("Enter the number : \n");
    scanf("%d",&n);

    temp = n;

    while(n>0)
    {
        dig = n%10;
        sum = (sum*10)+dig;
        n = n/10;
    }
    if(temp == sum)
    {
        printf("The number is a Palidrome number\n");
    }
    else{
        printf("The number is not a Palindrome number\n");
    }
    return 0;
}