/*注意乘法溢出
注意sum每次循环需要复位*/
#include <stdio.h>
int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    while(scanf("%d%d",&n,&m)==2)
    {
        double sum=0.0;
        if((n==m)&&(n==0))
        {
            return 0;
        }
        else
        {
            while(n<=m)
            {
                sum+=(1.0/n)*(1.0/n);
                n++;
            }
            printf("%.5f\n",sum);
        }
    }
}
