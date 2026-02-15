#include<stdio.h>
#include<math.h>
float g(float x)
{
    return (x * x * x + 1) / 2;
}
int main()
{
    float x0, x1;
    printf("Enter the value of x0");
    scanf("%d",&x0);
    do
    {
        x1 = g(x0);
        if (abs(x1 - x0) < 0.01)
            break;
        x0 = x1;
        

    } while (1);
    printf("The root is %d",x1);
    return 0;
}