#include<stdio.h>
int main(){
 float X,result=0,arrx[100],arry[100],term=1;
 int i,j,n;
 printf("Enter the number of values:");
 scanf("%d",&n);
 printf("Enter the the value of X:");
 scanf("%f",&X);
 for(i=0;i<n;i++){
    printf("Enter the value of x[%d]",i+1);
    scanf("%f",&arrx[i]);
    printf("Enter the value of y[%d]",i+1);
    scanf("%f",&arry[i]);
 }
 for(i=0;i<n;i++){
    term=1;
   for(j=0;j<n;j++){
    if(j!=i){
        term = term * (X - arrx[j]) / (arrx[i] - arrx[j]);
    }
   
   }
    result=result+term*arry[i];
 }
 printf("The value of lagrange's interpolation is:%f \n",result);
 return 0;
}