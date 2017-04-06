//UVa1584
#include <stdio.h>
#include <string.h>
#define maxn 105

//��״��s�ı�ʾ��p�Ƿ�ȱ�ʾ��q���ֵ���С
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
    return 0;//���
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
            if(Less(s,i,ans)) ans=i;//�ñ���ans��ʾ��ĿǰΪֹ���ֵ�����С�������봮�е���ʼλ��
        }
        for(int i=0;i<n;i++)
        {
            putchar(s[(i+ans)%n]);//��ansΪ��ʼλ�����
        }
        putchar('\n');
    }
    return 0;
}
