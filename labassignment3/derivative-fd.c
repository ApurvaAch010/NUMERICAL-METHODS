#include<stdio.h>
int main(){
    float x[100],fy[100][100], dy=0,dy2=0,h;
    float coef[] = {0, 0, 1, -1, 11.0/12.0, -5.0/6.0, 137.0/180.0};
    int n,i,j;
    printf("Enter the number of values:");
    scanf("%d",&n);
    
    printf("Enter the values of x:");
    for(i=0;i<n;i++){
        scanf("%f",&x[i]);
    }
    h=x[1]-x[0];
    printf("Enter the values of y:");
    for(i=0;i<n;i++){
        scanf("%f",&fy[i][0]);
    }
    for ( j = 1; j < n; j++)
    {
        for ( i = 0; i < n - j; i++)
        {
            fy[i][j] = fy[i + 1][j - 1] - fy[i][j - 1];
        }
    }
    for(i=1;i<n;i++){
        if(i%2==1)
        dy+=fy[0][i]/i;
        else{
            dy-=fy[0][i]/i;
        }
       
    }
     dy=dy/h;
    for (i = 2; i < n; i++) {
    dy2 += coef[i] * fy[0][i];
}


    dy2=dy2/(h*h);

    printf("First derivative = %f\n", dy);
    printf("Second derivative = %f\n", dy2);
    return 0;

}