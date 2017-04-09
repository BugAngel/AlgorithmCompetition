//UVa1368
#include <stdio.h>
#include <string.h>


int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int T;//数据组数
    char grid[55][1005];
    scanf("%d",&T);
    while(T--)
    {
        int m;//DNA序列数
        int n;//DNA序列长度
        scanf("%d%d",&m,&n);

        memset(grid,0,sizeof(grid));
        for(int i=0;i<m;i++)
        {
            scanf("%s",grid[i]);
        }

        int num[4];//统计ACGT出现的次数
        char result[n+1];//最终字符串
        char Letter[4]={'A','C','G','T'};
        for(int j=0;j<n;j++)
        {
            memset(num,0,sizeof(num));
            for(int i=0;i<m;i++)
            {
                //求出每个字母的个数
                if(grid[i][j]==Letter[0])
                {
                    num[0]++;
                }
                if(grid[i][j]==Letter[1])
                {
                    num[1]++;
                }
                if(grid[i][j]==Letter[2])
                {
                    num[2]++;
                }
                if(grid[i][j]==Letter[3])
                {
                    num[3]++;
                }
            }
            //按字典序求出距离最小的字母
            int Max=num[0];
            result[j]=Letter[0];
            if(Max<num[1])
            {
                Max=num[1];
                result[j]=Letter[1];
            }
            if(Max<num[2])
            {
                Max=num[2];
                result[j]=Letter[2];
            }
            if(Max<num[3])
            {
                Max=num[3];
                result[j]=Letter[3];
            }
        }

        result[n]='\0';
        printf("%s\n",result);
        //求距离
        int Count=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            if(result[j]!=grid[i][j])
            Count++;
        printf("%d\n",Count);
    }

    return 0;
}
