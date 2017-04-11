//UVa 133
#include <stdio.h>
#include <string.h>
#define maxn 25
int n,k,m,a[maxn];

//��ʱ����t����������d��-1��ʾ˳ʱ���ߣ���������λ��
int go(int p,int d,int t)
{
    while(t--)
    {
        do
        {
            p= (p+d+n-1) %n + 1;
        }
        while(a[p]==0);//�ߵ���һ����������
    }
    return p;
}
int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    while(scanf("%d%d%d",&n,&k,&m)==3 && n)
    {
        for(int i=1;i<=n;i++)
        {
            a[i]=i;
        }
        int left=n;//��ʣ�µ���
        int p1=n,p2=1;
        while(left)
        {
            p1=go(p1,1,k);
            p2=go(p2,-1,m);
            printf("%3d",p1);
            left--;
            if(p2!=p1)
            {
                printf("%3d",p2);
                left--;
            }
            a[p1]=a[p2]=0;
            if(left) printf(",");
        }
        printf("\n");
    }
    return 0;
}
