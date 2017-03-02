/*不要在while里随意加return 0;
这样程序会直接结束*/
#include <stdio.h>
int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int a,b,c,number=0;

    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        if((a<3)&&(b<5)&&(c<7))
        {
            int x=10;
            while(x<=100)
            {
                if((x%3==a)&&(x%5==b)&&(x%7)==c)
                {
                    printf("%d\n",x);
                    break;
                }
                else
                {
                    x++;
                }
            }
            if(x==101)
            {
                printf("No answer\n");
            }
        }
    }
    return 0;
}
