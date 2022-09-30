#include<stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 20;
    int *p = &num1;
    int *q = &num2;
    *p++ = *q++;
    printf("%d %d",num1 , num2);
    return 0;
}


