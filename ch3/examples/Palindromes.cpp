//UVa 401
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//对应字符的镜像字符
const char* rev="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
//输出字符
const char* msg[]={"not a palindrome","a regular palindrome","a mirrored string","a mirrored palindrome"};

char r(char ch)
{
    //判断是否为字母；
    if(isalpha(ch))
    {
        return rev[ch-'A'];
    }
    //rev数组是先字母后数字，数字就需要跳过字母的那一部分
    return rev[ch-'0'+25];
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    char s[30];
    while(scanf("%s",s)==1)
    {
        int len = strlen(s);
        int p=1,m=1;//作为msg数组下标分别判断回文串与镜像串
        for(int i=0;i<(len+1)/2;i++)
        {
            if(s[i]!=s[len-1-i])
            {
                p=0;//不是回文串
            }
            if(r(s[i])!=s[len-1-i])
            {
                m=0;//不是镜像串
            }
        }
        printf("%s -- is %s.\n\n",s,msg[m*2+p]);
    }

    return 0;
}
