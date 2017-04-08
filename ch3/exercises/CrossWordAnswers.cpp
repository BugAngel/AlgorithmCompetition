//Uva232

#include <stdio.h>
#include <string.h>

int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int r,c;
    int cases=0;//第cases组数据
    char grid[10][10];
    int mark[10][10];//标记

    while((scanf("%d%d",&r,&c))==2)
    {
        if(r==0) break;//输入结束

        memset(grid,0,sizeof(grid));
        memset(mark,0,sizeof(mark));
        getchar();//第一行的/nscanf并没有读入

        //输入网格
        for(int i=0;i<r;i++)
        {
            fgets(grid[i],15,stdin);
        }

        //起始格标记
        int Count=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                int a=((i==0)||(j==0));
                int b=((grid[i-1][j]=='*')&&(i>0));
                int c=((grid[i][j-1]=='*')&&(j>0));
                int d=(grid[i][j]!='*');
                if((a||b||c)&&d)
                { //位于左边界或上边界或左是黑格或上是黑格，同时自己不是黑格，标记为起始格
                    Count++;
                    mark[i][j]=Count;
                }
            }
        }

        if(cases++) printf("\n");//数据组间空行
        printf("puzzle #%d:\n",cases);

        //输出横向字符串
        printf("Across\n");
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                int b=((grid[i][j-1]=='*')&&(j>0));
                if((mark[i][j]>0)&&(b||(j==0)))
                { //有标记，是起始格;左面是*或是最左列，是横向起始格
                    int temp=j;
                    if(mark[i][temp]>9)
                    {
                        printf(" %d.",mark[i][temp]);
                    }
                    else
                    {
                        printf("  %d.",mark[i][temp]);
                    }
                    while((grid[i][temp]!='*')&&(temp<c))
                    { //当右边没有黑格且不是边界
                        printf("%c",grid[i][temp]);
                        temp++;
                    }
                    printf("\n");
                }
            }
        }

        //输出纵向字符串
        printf("Down\n");
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                int b=((grid[i-1][j]=='*')&&(i>0));
                if((mark[i][j]>0)&&(b||(i==0)))
                { //有标记，是起始格;上面是*或是最上行，是纵向起始格
                    int temp=i;
                    if(mark[temp][j]>9)
                    {
                        printf(" %d.",mark[temp][j]);
                    }
                    else
                    {
                        printf("  %d.",mark[temp][j]);
                    }
                    while((grid[temp][j]!='*')&&(temp<r))
                    { //当下边没有黑格且不是边界
                        printf("%c",grid[temp][j]);
                        temp++;
                    }
                    printf("\n");
                }
            }
        }

    }
    return 0;
}
