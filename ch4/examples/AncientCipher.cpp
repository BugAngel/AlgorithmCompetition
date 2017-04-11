//UVa 1339
#include <cstdio>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    char s[105],t[105];

    while(scanf("%s",s)==1)
    {
        scanf("%s",t);
        int flag=1;
        int len_s,len_t;
        int num_s[26],num_t[26];//统计各个字母出现次数

        memset(num_s,0,sizeof(num_s));
        memset(num_t,0,sizeof(num_t));

        len_s=strlen(s);
        len_t=strlen(t);

        if(len_s==len_t)
        {
            for(int i=0;i<len_s;i++)
            {
                num_s[s[i]-'A']++;
                num_t[t[i]-'A']++;
            }
            sort(num_s,num_s+26);
            sort(num_t,num_t+26);
            for(int i=0;i<26;i++)
            {
                if(num_s[i]!=num_t[i])
                {
                    printf("NO\n");
                    flag=0;
                    break;
                }
            }
            if(flag) printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        memset(s,0,sizeof(s));
        memset(t,0,sizeof(t));
    }
    return 0;
}
