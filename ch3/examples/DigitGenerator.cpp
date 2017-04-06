//UVa 1583
#include <stdio.h>
#include <string.h>

#define maxn 100005

int ans[maxn];

int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int T,n;
    memset(ans,0,sizeof(ans));
    for(int m=1;m<maxn;m++)
    { //�Է�Χ��ÿ�������������Ԫ�������������Ԫ��Ϊ�����±꣬�������Ϊ������ֵ
        int x=m,y=m;
        while(x>0)
        {
            y+=x%10;
            x/=10;
        }
        if(ans[y]==0 || m<ans[y]) ans[y]=m; //ѡ��С���Ǹ�
    }
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        printf("%d\n",ans[n]);//������Ԫ��Ϊ�±�ֱ���ҳ���С����
    }
    return 0;
}
