#include<stdio.h>
int main()
{
    int a[10],i,n,sum=0;
    int *p;
    printf("The number of elements : \n");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    p = a;
    for(i = 0 ; i<n ; i++)
    {
        scanf("%d",p);
        p++;
    }
    p = a;
    for(i = 0 ; i<n ; i++)
    {
        sum = sum + *p;
        p++;
    }
    printf("The sum of elements : %d\n",sum);
    return 0;
}