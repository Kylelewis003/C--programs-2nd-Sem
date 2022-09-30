#include<stdio.h>
int main()
{
    int n,i,c;
    int a = 0;
    int b = 1;
    printf("Enter the number of terms : \n");
    scanf("%d",&n);

    printf("\n%d %d",a,b);

    for(i = 2 ; i<n ; i++)
    {
        c  = a + b;
        printf(" %d",c);
        a = b;
        b = c;
        c = a;
    }
    return 0;
}