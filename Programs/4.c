#include<stdio.h>
int btod(int bin);
int main()
{
    int n;
    printf("Enter binary value: \n");
    scanf("%d",&n);
    printf("The deciaml equilvalent of %d is : %d",n,(btod(n)));
    return 0;
}
int btod(int bin)
{
    if(bin == 0)
    {
        return 0;
    }
    else
    {
        return (bin%10 + (btod(bin/10)* 2));
    }
}