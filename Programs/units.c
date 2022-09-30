#include<stdio.h>

int main()
{
    char name[50];
    int units,charge,total;
    printf("Enter the name of the user : \n");
    gets(name);
    printf("Enter the number of units consumed : \n");
    scanf("%d",&units);

    if(units < 0)
    {
        printf("Enter a valid input\n");
        return 4;
    }
    else if(units>=0 && units<=200)
    {
        charge = units*0.8;
    }
    else if(units>200 && units<=300)
    {
        charge = (200*0.8)+((units-200)*0.9);
    }
    else
    {
        charge = (200*0.8)+(100*0.9)+((units-300)*1);
    }

    total = charge + 100;

    if(total>400)
    {
        total = total + (total * 0.15);
    }

    printf("Name of user  = %s\n",name);
    printf("Total charge of units consumed  = %d\n",total);

    return 0;
}
    