#include<stdio.h>

int main()
{
    int n, i;
    struct Student{
        char usn[10];
        char name[1000];
        float m1,m2,m3;
        float avg
    };

    printf("Enter the number of students : \n");
    scanf("%d",&n);

    struct Student s[1000];

    for(i = 0 ; i<n ; i++)
    {
        printf("Enter student usn number : \n");
        scanf("%s",s[i].usn);
        printf("Enter student name : \n");
        scanf("%s",s[i].name);
        printf("Enter student marks1 : \n");
        scanf("%f",&s[i].m1);
        printf("Enter student marks2 : \n");
        scanf("%f",&s[i].m2);
        printf("Enter student marks3 : \n");
        scanf("%f",&s[i].m3);

        s[i].avg = (s[i].m1 + s[i].m2 + s[i].m3)/3.0;
    }

    printf("The students having average above 35.0 are : \n");
    for(i = 0 ; i<n ; i++)
    {
        if(s[i].avg>35.0)
        {
            printf("%s\t%s\t%f\n",s[i].usn,s[i].name,s[i].avg);
        }
    }
    printf("The students having average below 35.0 are : \n");
    for(i = 0 ; i<n ; i++)
    {
        if(s[i].avg<35.0)
        {
            printf("%s\t%s\t%f\n",s[i].usn,s[i].name,s[i].avg);
        }
    }

    return 0;
}