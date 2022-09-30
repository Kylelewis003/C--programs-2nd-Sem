#include <stdio.h>

int swap(int *a , int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return *a , *b;
}
int main()
{
    int x = 10 , y = 20;
    printf("Before Swapping x = %d and y = %d\n",x,y);
    swap(&x , &y);
    printf("After swapping x = %d and y = %d\n",x,y);
    return 0;
}