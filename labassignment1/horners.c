#include<stdio.h>

int main()
{
    int n;
    float r,coef[100];

    printf("Enter degree of polynomials");
    scanf("%d",n);
    
    printf("Enter coefficients (highest degree to constant):\n");
    for (int i = 0; i <= n; i++)
    {
        scanf("%d",&coef[i]);
    }
    printf("Enter value of r:");
    scanf("%d",&r);
    float b = coef[0]; 

    for (int i = 1; i <= n; i++)
    {
        b = b * r + coef[i];
    }
    printf("P(%d)=%d",r,b);
    return 0;
}
