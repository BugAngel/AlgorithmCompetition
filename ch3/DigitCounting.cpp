//Uva1225
#include<stdio.h>
#include<string.h>

#define max 100000000
char s[max];//总字符串
char number[10000];//每个数字转换成的字符串
int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int m,n,num[10]={0};

    scanf("%d",&m);
    for(int j=0;j<m;j++)
    {
        memset(s,0,sizeof(s));
        memset(number,0,sizeof(number));
        memset(num,0,sizeof(num));

        scanf("%d",&n);

        for(int i=1;i<=n;i++)
        {
            sprintf(number,"%d",i);
            strcat(s,number);
        }

        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='0')
            {
                num[0]++;
            }
            else if(s[i]=='1')
            {
                num[1]++;
            }
            else if(s[i]=='2')
            {
                num[2]++;
            }
            else if(s[i]=='3')
            {
                num[3]++;
            }
            else if(s[i]=='4')
            {
                num[4]++;
            }
            else if(s[i]=='5')
            {
                num[5]++;
            }
            else if(s[i]=='6')
            {
                num[6]++;
            }
            else if(s[i]=='7')
            {
                num[7]++;
            }
            else if(s[i]=='8')
            {
                num[8]++;
            }
            else if(s[i]=='9')
            {
                num[9]++;
            }
//            else
//            {
//                printf("error");
//            }
        }
        for(int i=0;i<9;i++)
        {
            printf("%d ",num[i]);
        }
        printf("%d",num[9]);//注意空格也算在输出格式里面
        printf("\n");
    }

    return 0;
}
