#include<stdio.h>
#include<math.h>

int main()
{
    float sum , mean , sd, var, a[20];
    int n , i;
    float *p;

    printf("Enter the number of elements in array : \n");
    scanf("%d" , &n);
    p = a;
    printf("Enter the elements in array : \n");
    for(i = 0 ; i<n ; i++)
    {
        scanf("%f",p);
        p++;
    }
    p = a;
    sum = sd = var = mean = 0.0;
    for(i = 0 ; i<n ; i++)
    {
        sum+=*p;
        p++;
    }
    p = a;

    mean = sum / (float)n;

    for(i = 0 ; i<n ; i++)
    {
        var+=pow((*p-mean),2);
        p++;
    }

    var = var/n;

    sd = sqrt(var);

    printf("Sum = %f\nMean = %f\nVariance = %f\nStandard Deviation = %f\n",sum,mean,var,sd);
    return 0;

}