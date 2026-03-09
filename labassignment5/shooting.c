#include<stdio.h>

int main()
{
    float x0, xn, y0, yn, h, z;
    int n, i;

    printf("Enter x0, y0: ");
    scanf("%f%f",&x0,&y0);

    printf("Enter xn, yn: ");
    scanf("%f%f",&xn,&yn);

    printf("Enter step size h: ");
    scanf("%f",&h);

    printf("Enter initial slope guess z: ");
    scanf("%f",&z);

    float x=x0, y=y0;

    n=(xn-x0)/h;

    for(i=1;i<=n;i++)
    {
        y=y+h*z;
        z=z-h*y; // Example differential: y''=-y
        x=x+h;
    }

    printf("Approximate value of y at x=%f is %f\n",x,y);

    return 0;
}