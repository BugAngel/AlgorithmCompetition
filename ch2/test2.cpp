//程序会无限输出
#include <stdio.h>
int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    double i;
    for(i=0;i!=10.0;i+=0.1)
    {
        printf("%.1f\n",i);
    }
    return 0;
}
