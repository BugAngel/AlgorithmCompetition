//UVa1584
#include <stdio.h>
#include <string.h>
#define maxn 105

//环状串s的表示法p是否比表示法q的字典序小
int Less(const char* s,int p,int q)
{
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[(p+i)%n] != s[(q+i)%n])
        {
            return s[(p+i)%n] < s[(q+i)%n];
        }
    }
    return 0;//相等
}

int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int T;
    char s[maxn];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",s);
        int ans=0;
        int n=strlen(s);
        for(int i=1;i<n;i++)
        {
            if(Less(s,i,ans)) ans=i;//用变量ans表示到目前为止，字典序最小串在输入串中的起始位置
        }
        for(int i=0;i<n;i++)
        {
            putchar(s[(i+ans)%n]);//以ans为起始位置输出
        }
        putchar('\n');
    }
    return 0;
}
