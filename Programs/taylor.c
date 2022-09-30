#include<stdio.h>
#include<math.h>

int main()
{
    float x,sum,term,nume,deno,degree;
    int i;

    printf("Enter the degree you want to find sin off : \n");
    scanf("%f",&degree);

    x = degree * (3.14/180.0);

    sum = 0.0;
    nume = x;
    deno = 1.0;
    i = 1;

    do
    {
        term = nume/deno;
        sum+=term;
        i+=2;
        nume = -nume * x * x;
        deno = deno * i * (i-1);
    } while(fabs(term)>=0.00001);

    printf("The value of sin(%f) using Taylor series is : %f \n",degree,sum);
    printf("The value of sin(%f) using bulit-in function is : %f \n",degree,sin(x));
    return 0;    
}