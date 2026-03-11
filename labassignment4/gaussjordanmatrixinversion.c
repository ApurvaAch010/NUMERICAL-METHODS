#include<stdio.h>

int main()
{
    int i,j,k,n;
    float A[20][40],c;

    printf("Enter the order of matrix: ");
    scanf("%d",&n);

    printf("Enter the elements of matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("A[%d][%d] : ",i,j);
            scanf("%f",&A[i][j]);
        }
    }

    for(i=1;i<=n;i++)
    {
        for(j=n+1;j<=2*n;j++)
        {
            if(j==(i+n))
                A[i][j]=1;
            else
                A[i][j]=0;
        }
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i!=j)
            {
                c=A[j][i]/A[i][i];
                for(k=1;k<=2*n;k++)
                {
                    A[j][k]=A[j][k]-c*A[i][k];
                }
            }
        }
    }

    for(i=1;i<=n;i++)
    {
        c=A[i][i];
        for(j=1;j<=2*n;j++)
        {
            A[i][j]=A[i][j]/c;
        }
    }

    printf("\nInverse Matrix is:\n");
    for(i=1;i<=n;i++)
    {
        for(j=n+1;j<=2*n;j++)
        {
            printf("%f ",A[i][j]);
        }
        printf("\n");
    }

    return 0;
}