#include<stdio.h>
int main(){
    int n,i;
    float x[100],y[100],result=0,h;
    printf("Enter the number of values:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the value of x:[%d]",i+1);
        scanf("%f",&x[i]);
        printf("Enter the value of y:[%d]",i+1);
        scanf("%f",&y[i]);
    }

    h=x[1]-x[0];
    result+=y[0]+y[n-1];
    for(i=1;i<n-1;i++){
        result+=2*y[i];
    }
  
    
    result=h/2 *result;
    printf("The area is %f",result);
    return 0;

}