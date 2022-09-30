#include<stdio.h>
int main()
{
    int n,i;
    struct Student
    {
        char usn[10];
        int sem;
        char name[10];
        float m1,m2,m3,m4,m5;
        float avg;
    };

    printf("Enter total number of students : \n");
    scanf("%d",&n);
    struct Student s[n];
    for(i = 0 ; i<n ; i++)
    {
        printf("Enter student USN number : \n");
        scanf("%s",s[i].usn);
        printf("Enter student semester : \n");
        scanf("%d",&s[i].sem);
        printf("Enter student name : \n");
        scanf("%s",s[i].name);
        printf("Enter student marks1 : \n");
        scanf("%f",&s[i].m1);
        printf("Enter student marks2 : \n");
        scanf("%f",&s[i].m2);
        printf("Enter student marks3 : \n");
        scanf("%f",&s[i].m3);
        printf("Enter student marks4 : \n");
        scanf("%f",&s[i].m4);
        printf("Enter student marks5 : \n");
        scanf("%f",&s[i].m5);
        printf("\n");

        s[i].avg = (s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5)/5.0;
        printf("\n");

    }
    printf("Students scoring above average marks : \n");
    for(i = 0 ; i<n ; i++)
    {
        if(s[i].avg>=35.0)
        {
            printf("%s\t%d\t%s\t%f\n",s[i].usn,s[i].sem,s[i].name,s[i].avg);
        }

    }
    printf("Students scoring below average marks : \n");
    for(i = 0 ; i<n ; i++)
    {
        if(s[i].avg<=35.0)
        {
            printf("%s\t%d\t%s\t%f\n",s[i].usn,s[i].sem,s[i].name,s[i].avg);
        }

    }

    return 0;

}