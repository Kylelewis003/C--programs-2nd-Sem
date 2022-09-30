#include<stdio.h>

int main()
{
    float m1,m2,m3,m4,m5,sum,average;

    printf("Enter your marks in Physics,Chemistry,Biology,Mathematics and Computer : \n");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);

    sum = m1+m2+m3+m4+m5;

    average = sum / 5.0;

    printf("Total Sum of all the marks is : %f \n",sum);
    printf("Average percentage in five subjects is : %f \n",average);

    if(average >= 90)
    {
         printf("Grade : A \n");
    }
    else if(average >= 80 && average <  90)
    {
        printf("Grade : B \n");
    }
    else if(average >= 70 && average <  80)
    {
        printf("Grade : C \n");
    }
    else if(average >= 60 && average <  70)
    {
        printf("Grade : D \n");
    }
    else if(average >= 40 && average <  60)
    {
        printf("Grade :  E \n");
    }
    else
    {
        printf("Grade : F \n");
    }

    return 0;
}