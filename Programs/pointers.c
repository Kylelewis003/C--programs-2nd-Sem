#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    float a[10],mean,sd,sum,var;
    float *p;
    printf("The number of elements : \n");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    p = a;

    for(i = 0 ; i<n ; i++)
    {
        scanf("%f",p);
        p++;
    }
    p = a;

    sum = sd = mean = var = 0;
    for(i = 0 ; i<n ; i++)
    {
        sum = sum + *p;
        p++;
    }
    p = a;

    mean = sum/n;
    for(i = 0 ; i<n ; i++)
    {
        var = var + pow((*p-mean),2);
        p++;
    }

    var = var/n;
    sd = sqrt(var);

    printf("Sum = %f\nMean = %f\nVariance = %f\nStandard Deviation = %f\n",sum,mean,var,sd);

    return 0;

}   