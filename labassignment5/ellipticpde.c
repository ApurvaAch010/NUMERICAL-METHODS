#include<stdio.h>

int main()
{
    int i,j,m,n;
    printf("Enter number of rows and columns (interior points): ");
    scanf("%d%d",&m,&n);

    float u[m+2][n+2]; // include boundary
    for(i=0;i<=m+1;i++)
        for(j=0;j<=n+1;j++)
            u[i][j]=0;

    printf("Enter boundary values:\n");
    for(i=0;i<=m+1;i++)
    {
        printf("u[%d][0] u[%d][%d]: ",i,i,n+1);
        scanf("%f%f",&u[i][0],&u[i][n+1]);
    }
    for(j=0;j<=n+1;j++)
    {
        printf("u[0][%d] u[%d][%d]: ",j,m+1,j);
        scanf("%f%f",&u[0][j],&u[m+1][j]);
    }

    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            u[i][j]=(u[i-1][j]+u[i+1][j]+u[i][j-1]+u[i][j+1])/4;

    printf("Solution matrix:\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
            printf("%f ",u[i][j]);
        printf("\n");
    }

    return 0;
}