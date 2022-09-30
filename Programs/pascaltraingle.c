
#include <stdio.h>
int main()
{
    int n, cal = 1, j, i, k;
 
    printf("Enter number of rows: ");
    scanf("%d",&n);
 
    for(i=0; i<n; i++)           
    {
        for(j=1; j <= n-i; j++)
        {
            printf("  ");
        }
           
        for(k=0; k <= i; k++)  
        {
            if (k==0 || i==0)     
                cal = 1;
            else
                cal = cal*(i-k+1)/k;  
 
            printf("%4d", cal);
        }
        printf("\n");
    }
 
    return 0;
}