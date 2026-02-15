#include <stdio.h>
int main()
{
    int n,i,j;
    float x[20], y[20][20], X, h, u, result, p;
    printf("Enter the number of points:");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        printf("Enter the value of x[%d]:", i + 1);
        scanf("%f", &x[i]);
        printf("Enter the value of y[%d]:", i + 1);
        scanf("%f", &y[i][0]);
    }
    for ( j = 1; j < n; j++)
    {
        for ( i = 0; i < n - j; i++)
        {
            y[i][j] = y[i + 1][j - 1] - y[i][j - 1];
        }
    }
    printf("Enter the the value of X:");
    scanf("%f", &X);
    h = x[1] - x[0];

    u = (X - x[0]) / h;
    result = y[0][0];
    p = 1;
    for ( i = 1; i < n; i++)
    {
        p = p * (u - (i - 1)) / i;
        result += p * y[0][i];
    }
    printf("The interpolated value is:%f\n", result);
    return 0;
}
