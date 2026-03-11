#include<stdio.h>
int main()
{
    int i,j,n,iter;
    float A[20][20],x[20],sum;

    printf("Enter number of variables: ");
    scanf("%d",&n);

    printf("Enter augmented matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            printf("A[%d][%d] : ",i,j);
            scanf("%f",&A[i][j]);
        }
    }

    for(i=1;i<=n;i++)
        x[i]=0;

    printf("Enter number of iterations: ");
    scanf("%d",&iter);

    for(int k=1;k<=iter;k++)
    {
        for(i=1;i<=n;i++)
        {
            sum=0;
            for(j=1;j<=n;j++)
            {
                if(i!=j)
                    sum=sum+A[i][j]*x[j];
            }

            x[i]=(A[i][n+1]-sum)/A[i][i];
        }
    }

    printf("\nSolution:\n");
    for(i=1;i<=n;i++)
        printf("x%d=%f\n",i,x[i]);

    return 0;
}