#include <stdio.h>
#include<math.h>

int main()
{
    int ch, n, x[100], Ex = 0, Ey = 0, Ex2 = 0, Exy = 0, i, j, Ex3 = 0, Ex4 = 0, Ex2y = 0, D1, D, D2, D3;
    float a, b, c, y[100], Y[100], EY = 0, ExY = 0, A;
    printf("Enter the number of values:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
     {
        printf("Enter the value of x[%d] and y[%d]", i + 1, i + 1);
        scanf("%d %f", &x[i], &y[i]);
        Ex += x[i];
        Ey += y[i];
        Ex2 += x[i] * x[i];
        Exy += x[i] * y[i];
        Ex3 += x[i] * x[i] * x[i];
        Ex4 += x[i] * x[i] * x[i] * x[i];
        Ex2y += x[i] * x[i] * y[i];
        Y[i] = log(y[i]);
        EY += Y[i];
        ExY += x[i] * Y[i];
    }
    printf("Enter your choice \n 1.Least square method, 2. Polynomial regression\n 3. Exponential regression\n:");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        b = (n * Exy - Ex * Ey) / (float)(n * Ex2 - (Ex * Ex));
        a = (Ey - b * Ex) / n;
        printf("Least square line: y=%.2f+%.2fx\n", a, b);
        break;
    case 2:
        D = n * (Ex2 * Ex4 - Ex3 * Ex3) - Ex * (Ex * Ex4 - Ex2 * Ex3) + Ex2 * (Ex * Ex3 - Ex2 * Ex2);
        D1 = Ey * (Ex2 * Ex4 - Ex3 * Ex3) - Ex * (Exy * Ex4 - Ex3 * Ex2y) + Ex2 * (Exy * Ex3 - Ex2 * Ex2y);
        D2 = n * (Exy * Ex4 - Ex3 * Ex2y) - Ey * (Ex * Ex4 - Ex2 * Ex3) + Ex2 * (Ex * Ex2y - Ex2 * Exy);
        D3 = n * (Ex2 * Ex2y - Exy * Ex3) - Ex * (Ex * Ex2y - Ex2 * Exy) + Ey * (Ex * Ex3 - Ex2 * Ex2);
        a = D1 / D;
        b = D2 / D;
        c = D3 / D;
        printf("Polynomial regression eqn:");
        printf("y=%.3f+%.3fx+%.3fx^2\n", a, b, c);

        break;
    case 3:
        b = (n * ExY - Ex * EY) / (float)(n * Ex2 - Ex * Ex);
        A = (EY - b * Ex) / n;
        a = exp(A);
        printf("Exponential curve:y=%.2fe^(%.2fx)\n",a,b);
        break;
    default:
    printf("Invalid choice\n");
        break;
    }
    return 0;
}