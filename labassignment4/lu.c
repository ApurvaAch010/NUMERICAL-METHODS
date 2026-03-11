#include<stdio.h>
int main()
{
    int i,j,k,n;
    float A[20][20],L[20][20],U[20][20],sum;

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
        for(j=1;j<=n;j++)
        {
            if(i==j)
                L[i][j]=1;
            else
                L[i][j]=0;
        }
    }

    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            sum=0;
            for(k=1;k<i;k++)
                sum=sum+L[i][k]*U[k][j];

            U[i][j]=A[i][j]-sum;
        }

        for(j=i+1;j<=n;j++)
        {
            sum=0;
            for(k=1;k<i;k++)
                sum=sum+L[j][k]*U[k][i];

            L[j][i]=(A[j][i]-sum)/U[i][i];
        }
    }

    printf("\nMatrix L:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf("%f ",L[i][j]);
        printf("\n");
    }

    printf("\nMatrix U:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf("%f ",U[i][j]);
        printf("\n");
    }

    return 0;
}