#include <stdio.h>

int main() {
    float x[4], y[4], h, result;

    for (int i = 0; i < 4; i++) {
        printf("Enter x[%d]: ", i + 1);
        scanf("%f", &x[i]);
        printf("Enter y[%d]: ", i + 1);
        scanf("%f", &y[i]);
    }

    h = x[1] - x[0];

    result = (3*h / 8) * (y[0] + 3*y[1] + 3*y[2] + y[3]);

    printf("Area  %f\n", result);

    return 0;
}