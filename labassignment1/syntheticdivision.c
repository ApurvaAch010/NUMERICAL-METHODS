#include<stdio.h>

int main() {
    int n,i;
    float r,coef[100], result[100];;

  printf("Enter degree of polynomial:");
   scanf("%d",&n);

  
  printf("Enter coefficients (highest degree to constant");
    for ( i = 0; i <= n; i++) {
          scanf("%d",&coef[i]);
    }

  printf("Enter value of r (for divisor x - r)");
    scanf("%d",&r);

   
    result[0] = coef[0];

    for ( i = 1; i <= n; i++) {
        result[i] = coef[i] + result[i - 1] * r;
    }

  printf("\nQuotient:");
    for ( i = 0; i < n; i++) {
        printf("%d",result[i]);
    }

  printf("\nRemainder: %d" , result[n] );

    return 0;
}
