//UVA1585
#include<stdio.h>
#include<string.h>
int main(void)
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int n;//test¸öÊý
    int score=0,O_sum=0;
    char c[100];
    memset(c,0,sizeof(c));
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        memset(c,0,sizeof(c));
        O_sum=0;
        scanf("%s",c);

        for(int j=0;c[j]!=0;j++)
        {
            if(c[j]=='O')
            {
                O_sum++;
                score+=O_sum;
            }
            else
            {
                O_sum=0;
            }
        }
        printf("%d\n",score);
        score=0;
    }

    return 0;
}
