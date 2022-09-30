#include<stdio.h>

int main()
{
    int i,n;
    struct employee
    {
        int id;
        char name[100];
        int sal;
    };
 
    printf("Enter number of employees : \n");
    scanf("%d",&n);
    struct employee emp[n];
    printf("Enter infomation for employees : \n");
    printf("\n");
    for(i = 0 ; i<n ;i++)
    {
        printf("Enter employee id number : \n");
        scanf("%d",&emp[i].id);
        printf("Enter employee name : \n");
        scanf("%s",emp[i].name);
        printf("Enter employee salary : \n");
        scanf("%d",&emp[i].sal);
        printf("\n");
    }
    printf("The employees having salary over 5000 are : \n");
    for(i = 0 ; i<n ; i++)
    {
        if(emp[i].sal > 5000)
        {
            printf("%d\t%s\t%d\n",emp[i].id,emp[i].name,emp[i].sal);
        }
    }
    return 0;
}