#include<stdio.h>
int btod(int bin);

int main()
{
    int binary;
    printf("Enter binary input : \n");
    scanf("%d",&binary);
    printf("Decimal equivalent is : %d\n",btod(binary));

    return 0;
}

int btod (int bin)
{
    if(bin == 0)
    {
        return 0;
    }
    else
    {
        return (bin % 10 + (btod(bin/10) * 2));
    }
}   