//Uva232

#include <stdio.h>
#include <string.h>

int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int r,c;
    int cases=0;//��cases������
    char grid[10][10];
    int mark[10][10];//���

    while((scanf("%d%d",&r,&c))==2)
    {
        if(r==0) break;//�������

        memset(grid,0,sizeof(grid));
        memset(mark,0,sizeof(mark));
        getchar();//��һ�е�/nscanf��û�ж���

        //��������
        for(int i=0;i<r;i++)
        {
            fgets(grid[i],15,stdin);
        }

        //��ʼ����
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
                { //λ����߽���ϱ߽�����Ǻڸ�����Ǻڸ�ͬʱ�Լ����Ǻڸ񣬱��Ϊ��ʼ��
                    Count++;
                    mark[i][j]=Count;
                }
            }
        }

        if(cases++) printf("\n");//����������
        printf("puzzle #%d:\n",cases);

        //��������ַ���
        printf("Across\n");
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                int b=((grid[i][j-1]=='*')&&(j>0));
                if((mark[i][j]>0)&&(b||(j==0)))
                { //�б�ǣ�����ʼ��;������*���������У��Ǻ�����ʼ��
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
                    { //���ұ�û�кڸ��Ҳ��Ǳ߽�
                        printf("%c",grid[i][temp]);
                        temp++;
                    }
                    printf("\n");
                }
            }
        }

        //��������ַ���
        printf("Down\n");
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                int b=((grid[i-1][j]=='*')&&(i>0));
                if((mark[i][j]>0)&&(b||(i==0)))
                { //�б�ǣ�����ʼ��;������*���������У���������ʼ��
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
                    { //���±�û�кڸ��Ҳ��Ǳ߽�
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
