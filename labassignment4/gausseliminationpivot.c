#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k,n,maxRow;
    float A[20][20],c,x[10],sum=0.0,temp;

    printf("\nEnter the order of matrix: ");
    scanf("%d",&n);

    printf("\nEnter the elements of augmented matrix rowwise:\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n+1; j++)
        {
            printf("A[%d][%d] : ", i,j);
            scanf("%f",&A[i][j]);
        }
    }

    for(j=1; j<=n; j++)
    {
        maxRow = j;
        for(i=j+1; i<=n; i++)
        {
            if(fabs(A[i][j]) > fabs(A[maxRow][j]))
            {
                maxRow = i;
            }
        }
        if(maxRow != j)
        {
            for(k=1; k<=n+1; k++)
            {
                temp = A[j][k];
                A[j][k] = A[maxRow][k];
                A[maxRow][k] = temp;
            }
        }

        for(i=1; i<=n; i++)
        {
            if(i>j)
            {
                c = A[i][j] / A[j][j];
                for(k=1; k<=n+1; k++)
                {
                    A[i][k] = A[i][k] - c * A[j][k];
                }
            }
        }
    }


    x[n] = A[n][n+1] / A[n][n];

    for(i=n-1; i>=1; i--)
    {
        sum = 0;
        for(j=i+1; j<=n; j++)
        {
            sum = sum + A[i][j] * x[j];
        }
        x[i] = (A[i][n+1] - sum) / A[i][i];
    }

    printf("\nThe solution is:\n");
    for(i=1; i<=n; i++)
    {
        printf("x%d = %f\n", i, x[i]);
    }

    return 0;
}