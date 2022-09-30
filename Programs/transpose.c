#include<stdio.h.>
int main()
{
    int a[10][10], b[10][19],r,c,i,j;
    printf("Enter the number of rows and column for matrix A : \n");
    scanf("%d%d",&r,&c);

    printf("Enter matrix A : \n");
    for(i = 0 ; i<r ; i++)
    {
        for(j = 0 ; j<c ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Matrix A : \n");
    for(i = 0 ; i<r ; i++)
    {
        for(j = 0 ; j<c ; j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }

    for(i = 0 ; i<r ; i++)
    {
        for(j = 0 ; j<c ; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    printf("Matrix B : \n");
    for(i = 0 ; i<c ; i++)
    {
        for(j = 0 ; j<r ; j++)
        {
            printf("%d \t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}