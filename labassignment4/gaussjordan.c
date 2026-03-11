#include<stdio.h>
int main()
{
    int i,j,k,n;
    float A[20][20],c,x[10];

    printf("\nEnter the order of matrix: ");
    scanf("%d",&n);

    printf("\nEnter the elements of augmented matrix rowwise:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            printf("A[%d][%d] : ",i,j);
            scanf("%f",&A[i][j]);
        }
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i!=j)
            {
                c=A[j][i]/A[i][i];
                for(k=1;k<=n+1;k++)
                {
                    A[j][k]=A[j][k]-c*A[i][k];
                }
            }
        }
    }

    for(i=1;i<=n;i++)
    {
        x[i]=A[i][n+1]/A[i][i];
    }

    printf("The solution is:\n");
    for(i=1;i<=n;i++)
    {
        printf("x%d=%f\n",i,x[i]);
    }

    return 0;
}