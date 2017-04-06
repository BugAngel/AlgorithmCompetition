//UVa 340
#include <stdio.h>
#define maxn 1010

int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,a[maxn],b[maxn];
    int kase=0;
    while(scanf("%d",&n) == 1 && n)
    { //n=0时输入结束
        printf("Game %d:\n",++kase);
        for(int i=0;i<n;i++)
        { //输入第一组数据
            scanf("%d",&a[i]);
        }
        while(1)
        {
            int A=0,B=0;//分别统计位置正确和出现过但位置不对
            for(int i=0;i<n;i++)
            {
                scanf("%d",&b[i]);
                if(a[i]==b[i])
                {
                    A++;
                }
            }
            if(b[0]==0)break;//正常不会有0 只要有零就结束
            for(int d=1;d<=9;d++)
            {
                int c1=0,c2=0;//分别统计数字d在答案序列和猜测序列各出现多少次
                for(int i=0;i<n;i++)
                {
                    if(a[i]==d) c1++;
                    if(b[i]==d) c2++;
                }
                if(c1<c2) B+=c1; else B+=c2;
            }
            printf("    (%d,%d)\n",A,B-A);//B需要减去位置也正确的那一部分
        }
    }
    return 0;
}


