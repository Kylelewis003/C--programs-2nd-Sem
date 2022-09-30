#include<stdio.h>
int main()
{
    int i,n,small,large;
    int a[10];
    printf("Enter the number of elements : \n");
    scanf("%d",&n);

    printf("Enter the array elements : \n");
    for(i = 0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

    large = a[0];
    small = a[0];

    for(i = 1 ; i<n ; i++)
    {
        if(small>a[i])
        {
            small = a[i];
        }
        if(large<a[i])
        {
            large = a[i];
        }
    }

    printf("The smallest element in the array is : %d\n",small);
    printf("The largest element in the array is : %d\n",large);

    return 0;
}