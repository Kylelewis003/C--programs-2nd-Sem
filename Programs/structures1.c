#include<stdio.h>
 
 int main()
 {
    struct dob{
        int d;
        int m;
        int y;
    };

    struct dob date ; 

    printf("Enter Date of birth(mm dd yy) format : \n");
    scanf("%d%d%d",&date.m,&date.d,&date.y);

    printf("Date of Birth : %d/%d/%d \n",date.m,date.d,date.y);
    return 0;
 }