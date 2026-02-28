#include<stdio.h>
int main(){
     int n,i,j;
    float x[20], y[20][20],dy=0,h;
    printf("Enter the number of points:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of x[%d]:", i + 1);
        scanf("%f", &x[i]);
        printf("Enter the value of y[%d]:", i + 1);
        scanf("%f", &y[i][0]);
    }
      for (j = 1; j < n; j++) {
        for (i = n - 1; i >= j; i--) {
            y[i][j] = y[i][j - 1] - y[i - 1][j - 1];
        }
    }

    h=x[1]-x[0];
    for(i=1;i<n;i++){
        dy+=y[n-1][i]/i;
    }
    dy=dy/h;
    printf("Backward derivative of %f is %.2f \n",x[n-1],dy);
    return 0;
}