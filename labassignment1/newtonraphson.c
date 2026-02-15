#include<stdio.h>
#include<math.h>

float func(float x){
    return x*x*x-2*x+1;
}
float dfunc(float x){
    return 3*x*x-2;
}
int main(){
    float x1,x2;
    printf("Enter the value of x1:");
    scanf("%d",&x1);
    
    do{
        x2=x1-func(x1)/dfunc(x1);
        x1=x2;
    }
    while(abs(func(x2))>0.01);
    printf("The root iS: %d",x2);
    return 0;
}