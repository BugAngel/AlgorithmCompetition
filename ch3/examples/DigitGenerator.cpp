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
    { //对范围内每个数算出其生成元，这个数的生成元作为数组下标，这个数作为数组内值
        int x=m,y=m;
        while(x>0)
        {
            y+=x%10;
            x/=10;
        }
        if(ans[y]==0 || m<ans[y]) ans[y]=m; //选最小的那个
    }
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        printf("%d\n",ans[n]);//由生成元作为下标直接找出最小的数
    }
    return 0;
}
