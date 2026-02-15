#include<stdio.h>


float func(float x){
    return (x*x*x)-x*x-2;
}

int main(){
       float a,b,f1,f2,c;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    
    f1=func(a);
    f2=func(b);
    if(f1*f2>=0){
        printf("Not correct a and b");
        exit(1);
    }
    while((b-a)>=0.01){
       c=(a+b)/2; 
       if(func(c)==0){
        break;
       }
       else if(func(c)*func(a)<0){
        b=c;
       }
       else{
        a=c;
       }
    }
    printf("The root is %d",c);
    


    return 0;
}