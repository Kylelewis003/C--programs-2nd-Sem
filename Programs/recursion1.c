#include<stdio.h>

int gcd(int a , int b)
{
    int rem = a%b;
    if(rem == 0)
    {
        return b;
    }
    else
    {
        return gcd((b,rem));
    }
}
int main()
{
    int x,y,hcf;
    printf("Enter two numbers : \n");
    scanf("%d%d",&x,&y);
    hcf = gcd(x,y);
    printf("GCD = %d\n",hcf);
    printf("LCM = %d\n", x*y/hcf);
    return 0;
}