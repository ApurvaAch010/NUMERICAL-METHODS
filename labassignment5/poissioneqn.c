#include<stdio.h>

int main()
{
    int i,j,m,n;
    printf("Enter number of rows and columns (interior points): ");
    scanf("%d%d",&m,&n);

    float u[m+2][n+2], f;
    for(i=0;i<=m+1;i++)
        for(j=0;j<=n+1;j++)
            u[i][j]=0;

    printf("Enter source term f: ");
    scanf("%f",&f);

    printf("Enter boundary values:\n");
    for(i=0;i<=m+1;i++)
        for(j=0;j<=n+1;j++)
            if(i==0 || i==m+1 || j==0 || j==n+1)
            {
                printf("u[%d][%d]: ",i,j);
                scanf("%f",&u[i][j]);
            }

    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            u[i][j]=(u[i-1][j]+u[i+1][j]+u[i][j-1]+u[i][j+1]-f)/4;

    printf("Solution matrix:\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
            printf("%f ",u[i][j]);
        printf("\n");
    }

    return 0;
}