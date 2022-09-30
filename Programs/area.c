#include<stdio.h>
#include<string.h>

int main()
{
    char name[100000] = "Abhiramzsrytjyuj7kiki8k";
    char name1[100000] = "Abhiramrsk8ki8k8k8k8";
    int n;
    n = strncmp(name , name1 , 18 );
    printf("%d",n);
    return 0;
}
