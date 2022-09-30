#include<stdio.h>
int main()
{
    int n,i,j,temp,a[1000];
    printf("Enter the number of elements : \n");
    scanf("%d",&n);

    printf("Enter array elements : \n");
    for(i = 0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array before sorting : \n");
    for(i = 0 ; i<n ; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    for(i = 0 ; i<n-1 ; i++)
    {
        for(j = 0 ; j<n-i-1 ; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("Array before sorting : \n");
    for(i = 0 ; i<n ; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    int high , low , mid , x;

    printf("Enter the array element to be searched in the array : \n");
    scanf("%d",&x);

    low = 0;
    high = n-1;

    while (low<=high)
    {
        mid = (low + high)/2;
        if(x == a[mid])
        {
            printf("The element %d is found at location %d\n",x,mid+1);
            return 0;
        }
        else if(x<a[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid + 1;
        }
    }
    printf("The element %d is not found in the array \n",x);
    
}