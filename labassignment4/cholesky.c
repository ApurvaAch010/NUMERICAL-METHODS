#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n;
    float A[20][20],L[20][20],sum;

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
        for(j=1;j<=i;j++)
        {
            sum=0;
            for(k=1;k<j;k++)
                sum=sum+L[i][k]*L[j][k];

            if(i==j)
                L[i][j]=sqrt(A[i][i]-sum);
            else
                L[i][j]=(A[i][j]-sum)/L[j][j];
        }
    }

    printf("\nMatrix L:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i)
                printf("%f ",L[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}