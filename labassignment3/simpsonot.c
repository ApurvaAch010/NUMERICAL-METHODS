#include <stdio.h>

int main() {
    float x[3], y[3], h, result;

    for (int i = 0; i < 3; i++) {
        printf("Enter x[%d]: ", i + 1);
        scanf("%f", &x[i]);
        printf("Enter y[%d]: ", i + 1);
        scanf("%f", &y[i]);
    }

    h = x[1] - x[0];

    result = (h / 3) * (y[0] + 4*y[1] + y[2]);

    printf("Area  %f\n", result);

    return 0;
}