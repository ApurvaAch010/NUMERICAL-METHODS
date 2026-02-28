#include <stdio.h>

int main() {
    int n, i;
    float x[100], y[100], result = 0, h;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    /* Check condition */
    if ((n - 1) % 3 != 0) {
        printf("Error: Simpson's 3/8 rule requires intervals multiple of 3.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Enter the value of x[%d]: ", i + 1);
        scanf("%f", &x[i]);
        printf("Enter the value of y[%d]: ", i + 1);
        scanf("%f", &y[i]);
    }

    h = x[1] - x[0];

    result = y[0] + y[n - 1];

    for (i = 1; i < n - 1; i++) {
        if (i % 3 == 0)
            result += 2 * y[i];
        else
            result += 3 * y[i];
    }

    result = (3 * h / 8) * result;

    printf("Area= %f\n", result);
 
    return 0;
}