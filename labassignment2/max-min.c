#include<stdio.h>
int main(){
    int x[100],fx[100][100],n,i,j;
    float p,h,xmax;
    printf("Enter the number of value:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the value of x[%d] fx[%d]",i+1,i+1);
        scanf("%d %d",&x[i],&fx[i][0]);
    }
    for(j=1;j<n;j++){
        for(i=0;i<n-j;j++){
         fx[i][j]=fx[i+1][j-1]-fx[i][j-1]; 
        }
    }
    if (fx[0][2] < 0)
    printf("Maximum value occurs\n");
else
    printf("Minimum value occurs\n");

    h=x[1]-x[0];
    p=0.5-(fx[0][1]/(float)fx[0][2]);
    xmax=x[0]+p*h;
      printf("\nValue of p = %.3f", p);
    printf("\nMaximum / Minimum occurs at x = %.3f\n", xmax);
    return 0;
}