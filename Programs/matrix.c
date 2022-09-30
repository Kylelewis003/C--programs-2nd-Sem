#include<stdio.h>
int main()
{
    int i,j,a[10][10],b[10][10],c[10][10],r1,r2,c1,c2;
    printf("Enter order of matrix A : \n");
    scanf("%d%d",&r1,&c1);
    printf("Enter order of matrix B : \n");
    scanf("%d%d",&r2,&c2);

    if(r2 != c1)
    {
        printf("Multiplication of matricies is not possible \n");
        return -1;
    }

    printf("Enter elements in matrix A : \n");
    for(i = 0 ; i<r1 ; i++)
    {
        for(j = 0; j<c1 ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Matrix A : \n");
    for(i =0 ; i<r1 ; i++)
    {
        for(j = 0; j<c1 ; j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements in matrix B : \n");
    for(i = 0 ; i<r2 ; i++)
    {
        for(j = 0; j<c2 ; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("Matrix B : \n");
    for(i =0 ; i<r2 ; i++)
    {
        for(j = 0;j<c2 ; j++)
        {
            printf("%d \t",b[i][j]);
        }
        printf("\n");
    }

    for(i = 0 ; i<r1 ; i++)
    {
        for(j = 0 ; j<r2 ; j++)
        {
            c[i][j] = 0;
            for(int k = 0 ; k<c1 ; k++)
            {
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }

        }
    }

    printf("Matrix C : \n");
    for(i =0 ; i<r1 ; i++)
    {
        for(j = 0;j<c2 ; j++)
        {
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }

    return 0;
  
}