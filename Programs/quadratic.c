#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,r1,r2,d,real,img;
    printf("Enter the coefficients of the quadratic equation (a,b,c) : \n");
    scanf("%f%f%f",&a,&b,&c);

    if(a == 0)
    {
        printf("%f x + %f = 0 is a linear equation \n",b,c);
        return -1;
    }

    d = (b*b)-(4.0*a*c);

    if(d==0)
    {
        printf("The roots are real and equal \n");
        r1 = r2 = (-b)/(2.0 * a);
        printf("The roots are : \nRoot1 = %f and Root2 = %f \n",r1,r2);
    }
    else if(d>0)
    {
        printf("The roots are real and distinct \n");
        r2 = (-b+sqrt(d))/(2.0 * a);
        r1 = (-b-sqrt(d))/(2.0 * a);
        printf("The roots are : \nRoot1 = %f and Root2 = %f \n",r1,r2);
    }
    else
    {
        printf("The roots are real and imaginary \n");
        real = (-b)/(2.0 * a);
        img = sqrt(-d)/(2.0 *a);
        printf("The roots are : \n");
        printf("Root1 = %f + i%f \n",real,img);
        printf("Root2 = %f - i%f \n",real,img);

    }

    return 0;
    
}
