//UVa 227

//getchar()会读取空格和换行
#include<stdio.h>
#include<string.h>
#define maxn 1005

int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    char grid[5][7];//表格
    char cmd[maxn];
    int cases=0; //第几组数据标志

    while(fgets(grid[0],maxn,stdin))
    {
        if(grid[0][0]=='Z')
        { //输入结束判断
            return 0;
        }
        for(int i=1;i<5;i++)
        {//读取剩余四行
            fgets(grid[i],maxn,stdin);
        }

        //找到空格的位置
        int x_grid,y_grid;
        for(int i=0;i<5;i++)
            for(int j=0;j<5;j++)
                if(grid[i][j]==' ')
                {
                    x_grid=i;
                    y_grid=j;
                }

        //输入命令行
        char c;
        int Count=0;
        while((c=getchar())!='0')
        {
            cmd[Count]=c;
            Count++;
        }
        cmd[Count]='0';
        getchar(); //注意最后换行符要去掉


        int x=x_grid,y=y_grid;//x_grid y_grid分别为上一次空格的x,y坐标
        int flag=0;//出界标志
        for(int i=0;i<Count;i++)
        { //根据命令更新表格
            switch(cmd[i])
            { //找到输入指令后空格位置
                case 'A':x=x_grid-1;y=y_grid;break;
                case 'B':x=x_grid+1;y=y_grid;break;
                case 'L':x=x_grid;y=y_grid-1;break;
                case 'R':x=x_grid;y=y_grid+1;break;
            }


            //判断x,y是否出界
            if((x<0)||(x>4)||(y<0)||(y>4))
            {
                flag=1;//出界
                break;
            }
            else
            {
                grid[x_grid][y_grid]=grid[x][y];//空格与将要成为空格的字符交换位置
                grid[x][y]=' ';//新的 空格
                x_grid=x;y_grid=y;//数据更新
            }
        }

        //输出
        if(cases++) printf("\n");//与上一行之间有空行
        printf("Puzzle #%d:\n",cases);
        if(flag==1)
        {
            printf("This puzzle has no final configuration.\n");
        }
        else
        {
            for(int i=0;i<5;i++)
            {
                printf("%c",grid[i][0]);
                for(int j=1;j<5;j++)
                {
                    printf(" %c",grid[i][j]);
                }
                printf("\n");
            }
        }

    }
    return 0;
}
