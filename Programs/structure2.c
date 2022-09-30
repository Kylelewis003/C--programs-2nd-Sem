#include<stdio.h>

int main()
{
    int i,n,largest;
    struct employee
    {
        int age;
        char name[100];
        int sal;
    };

    struct employee emp[10];
    printf("Enter infomation for employees : \n");
    printf("\n");
    for(i = 1 ; i<10 ;i++)
    {
        printf("Enter employee %d age : \n",i);
        scanf("%d",&emp[i].age);
        printf("Enter employee %d name : \n",i);
        scanf("%s",emp[i].name);
        printf("Enter employee %d salary : \n",i);
        scanf("%d",&emp[i].sal);
        printf("\n");
    }

    largest = emp[0].sal;
    for(i = 1 ; i<10 ; i++)
    {
        if(emp[i].sal>largest)
        {
            largest = emp[i].sal;
        }

    }
    printf("Highest employee details : \n");
    printf("\n");
    for(i = 0 ; i<10 ; i++)
    {
        if(emp[i].sal == largest)
        {
            printf("%d\t%s\t%d\n",emp[i].age,emp[i].name,emp[i].sal);
        }
    }
    return 0;
}
