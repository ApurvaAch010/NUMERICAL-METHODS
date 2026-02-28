#include <stdio.h>

int main() {
    float x0, x1, y0, y1, result;

    printf("Enter x0 and x1: ");
    scanf("%f %f", &x0, &x1);

    printf("Enter y0 and y1: ");
    scanf("%f %f", &y0, &y1);

    result = (x1 - x0) / 2 * (y0 + y1);

    printf("Area= %f\n", result);

    return 0;
}