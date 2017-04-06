//Uva455
#include<stdio.h>
#include<string.h>
int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int T;
    char s[100];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",s);
        int len=strlen(s);
//        printf("len=%d\n",len);
        for(int i=1;i<=len;i++)
        {
//            printf("i=%d\n",i);
            if(len%i==0)
            {
                int flag=1;
                for(int j=i;j<len;j++)
                {
                    if(s[j]!=s[j%i])
                    {
                        flag=0;
//                        printf("j=%d\n",j);
                        break;
                    }
                }
                if(flag)
                {
                    if(T)
                    {
                        printf("%d\n\n",i);
                    }
                    else
                    {
                        printf("%d\n",i);//最后一行也要换行 否则OJ不知道结束了
                    }

                    break;
                }
            }
        }
    }
    return 0;
}
