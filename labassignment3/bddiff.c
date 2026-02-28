#include<stdio.h>
int main(){
    int n, i;
    float x[100], y[100], h, dy;

    printf("Enter number of values: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter x[%d]: ", i+1);
        scanf("%f", &x[i]);
        printf("Enter y[%d]: ", i+1);
        scanf("%f", &y[i]);
    }

    h = x[1] - x[0];

    dy = (y[n-1] - y[n-2]) / h;

    printf("Backward derivative = %f\n", dy);

    return 0;
}