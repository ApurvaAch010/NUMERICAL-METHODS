#include<stdio.h>

float f(float x,float y)
{
    return x+y;
}

int main()
{
    float x0,y0,h,xn,y1;
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
        y1=y0+h*f(x0,y0);
        y0=y0+(h/2)*(f(x0,y0)+f(x0+h,y1));
        x0=x0+h;
    }

    printf("Value of y at x=%f is %f\n",x0,y0);

    return 0;
}