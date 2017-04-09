//UVa 10340
#include <stdio.h>
#include <string.h>

char s[1000005],t[1000005];

int Cmp(char *s,char *t)
{
    int len_s,len_t;
    int i,j;
    len_s=strlen(s);
    len_t=strlen(t);
    for(i=0,j=0;i<len_s && j<len_t;)
    {
        if(s[i]==t[j])
        {
            i++;j++;
        }
        else
        {
            j++;
        }
    }
    return i==len_s;
}

int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    while((scanf("%s%s",s,t))==2)
    {
        if(Cmp(s,t)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
