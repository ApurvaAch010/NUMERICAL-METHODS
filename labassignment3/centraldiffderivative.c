#include<stdio.h>
int main(){
    int n, i, pos;
    float x[100], y[100], h, dy;

    printf("Enter number of values: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter x[%d]: ", i+1);
        scanf("%f", &x[i]);
        printf("Enter y[%d]: ", i+1);
        scanf("%f", &y[i]);
    }

    printf("Enter position for derivative (1 to %d): ", n-2);
    scanf("%d", &pos);

    h = x[1] - x[0];

    dy = (y[pos+1] - y[pos-1]) / (2*h);

    printf("Derivative = %f\n", dy);

    return 0;
}