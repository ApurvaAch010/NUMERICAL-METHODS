#include<stdio.h>

float f(float x,float y)
{
    return x+y;
}

float f1(float x,float y)
{
    return 1+x+y;
}

int main()
{
    float x0,y0,h,xn;
    int n,i;

    printf("Enter x0 and y0: ");
    scanf("%f%f",&x0,&y0);

    printf("Enter step size: ");
    scanf("%f",&h);

    printf("Enter xn: ");
    scanf("%f",&xn);

    n=(xn-x0)/h;

    for(i=1;i<=n;i++)
    {
        y0=y0+h*f(x0,y0)+h*h*f1(x0,y0)/2;
        x0=x0+h;
    }

    printf("Value of y at x=%f is %f",x0,y0);

    return 0;
}