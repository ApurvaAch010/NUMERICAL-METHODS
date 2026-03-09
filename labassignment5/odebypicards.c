#include<stdio.h>
#include<math.h>

float f(float x,float y)
{
    return x+y;
}

int main()
{
    float x0,y0,h,x,y1,y2,y3;
    
    printf("Enter x0 and y0: ");
    scanf("%f%f",&x0,&y0);

    printf("Enter x: ");
    scanf("%f",&x);

    h=x-x0;

    y1 = y0 + h*(x0 + y0);

    y2 = y0 + h*(x0 + y0) + (h*h)/2;

    y3 = y0 + h*(x0 + y0) + (h*h)/2 + (h*h*h)/6;

    printf("First approximation = %f\n",y1);
    printf("Second approximation = %f\n",y2);
    printf("Third approximation = %f\n",y3);

    return 0;
}