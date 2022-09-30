#include<stdio.h>
int main()
{
    int a[20],i,x,n;
    printf("Enter number of elements : \n");
    scanf("%d",&n);

    printf("Enter array elements : \n");
    for(i = 0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter element to be searched for : \n");
    scanf("%d",&x);

    for(i= 0; i<n ; i++)
    
    {
        if(a[i] == x)
        {
            break;
        }
    }


    if(i<n)
    {
        printf("Element found at index %d \n",i);
    }
    else{
        printf("Element not found");
    }

    return 0;

}