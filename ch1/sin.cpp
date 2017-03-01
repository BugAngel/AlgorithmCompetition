#include <stdio.h>
#include <math.h>
int main(void)
{
    //piµÄ±íÊ¾
    const double pi=acos(-1.0);
    int n;
    scanf("%d",&n);
    printf("%lf %lf",sin(n*pi/180),cos(n*pi/180));
    return 0;
}
