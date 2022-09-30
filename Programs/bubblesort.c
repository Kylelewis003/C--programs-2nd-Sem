#include<stdio.h>
int main()
{
    int n , temp , i , j , a[1000];
    printf("Enter the number of array elements : \n");
    scanf("%d",&n);

    printf("Enter %d numbers : \n",n);
    for(i = 0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The array before sorting is : \n");
    for(i = 0; i<n ; i++)
    {
        printf("%d \n" ,a[i]);
    }

    for(i = 0; i<n-1 ; i++)
    {
        for(j = 0 ; j<n-1-i ; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("The array after sorting is : \n");
    for(i = 0 ; i<n ; i++)
    {
        printf("%d \n",a[i]);

    }

    return 0;

}
