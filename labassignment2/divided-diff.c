#include <stdio.h>
int main()
{
    float x[100], y[100][100], X, result, term;
    int n, i, j;
    printf("Enter the number of values:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of x[%d]:", i + 1);
        scanf("%f", &x[i]);
        printf("Enter the value of y[%d]:", i + 1);
        scanf("%f", &y[i][0]);
    }
    printf("Enter the value of X:");
    scanf("%f", &X);
    for (j = 1; j < n; j++)
    {
        for (i = 0; i < n - j; i++)
        {
            y[i][j] = ((y[i + 1][j - 1] - y[i][j - 1])) / (x[i+j] - x[i]);
        }
    }
    result = y[0][0];
    for (i = 1; i < n; i++)
    {
        term = y[0][i];
        for (j = 0; j < i; j++)
        {
            term *= (X - x[j]);
        }
        result += term;
    }
    printf("Interpolation of %f is %f \n", X, result);
    return 0;
}