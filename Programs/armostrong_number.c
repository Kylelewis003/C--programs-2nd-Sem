#include <stdio.h>

void main(){
    int num,r,sum,temp;
    int n1,n2;

    printf("Input starting number of range: ");
    scanf("%d",&n1);

    printf("Input ending number of range : ");
    scanf("%d",&n2);

    printf("Armstrong numbers between %d and %d are: ",n1 ,n2);
    for(num=n1;num<=n2;num++){
         temp=num;
         sum = 0;

         while(temp!=0){
             r=temp % 10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             printf("%d ",num);
    }
printf("\n");
}