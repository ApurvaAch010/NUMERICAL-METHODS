#include<stdio.h>

float f(float x,float y)
{
    return x+y;
}

int main()
{
    float x0,y0,h,xn,k1,k2,k3,k4;
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
        k1=h*f(x0,y0);
        k2=h*f(x0+h/2,y0+k1/2);
        k3=h*f(x0+h/2,y0+k2/2);
        k4=h*f(x0+h,y0+k3);

        y0=y0+(k1+2*k2+2*k3+k4)/6;
        x0=x0+h;
    }

    printf("Value of y at x=%f is %f\n",x0,y0);

    return 0;
}