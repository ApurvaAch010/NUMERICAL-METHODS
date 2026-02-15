#include<stdio.h>
float func(float x)
{
    return x * x - 4;
}
int main()
{
    int it;
    float x0, x1, x2, fx, fx1;
    printf("Enter the values of x0 and x1:");
    scanf("%d %d",&x0,&x1);
    printf("Enter the number of iterations:");
    scanf("%d",&it);
    for (int i = 0; i < it; i++)
    {
        x2 = x1 - (func(x1) * (x1 - x0)) / (func(x1) - func(x0));
        x0 = x1;
        x1 = x2;
    }
    printf("The root id:%d",x2);
    return 0;
}