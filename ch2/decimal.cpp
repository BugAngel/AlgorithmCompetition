/*printf��*����ƥ��һ������
ע����������������Ҫ�󸡵���*/
#include <stdio.h>
int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int a,b,c;
    double d;
    double e,f;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        if((a==b)&&(a==c)&&(a==0))
        {
            return 0;
        }
        else
        {
            e=a;
            f=b;
            d=e/f;
            printf("%.*f\n",c,d);
        }
    }
}
