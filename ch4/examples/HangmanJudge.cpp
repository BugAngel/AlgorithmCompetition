//UVa 489
#include <stdio.h>
#include <string.h>

#define maxn 100
int left,chance;//�����left��λ�ã���chance��֮��ͻ���
char s[maxn],s2[maxn];//�����ַ���s����Ҳµ���ĸ������s2
int win,lose;//win=1��ʾӮ�ˣ�lose=1��ʾ����

void guess(char ch)
{
    int bad=1;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==ch)
        {
            left--;
            s[i]=' ';
            bad=0;
        }
    }
    if(bad) --chance;
    if(!chance) lose=1;
    if(!left) win=1;
}
int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int rnd;
    while(scanf("%d%s%s",&rnd,s,s2)==3 && rnd!=-1)
    {
        printf("Round %d\n",rnd);
        win=lose=0;//�������һ������֮ǰҪ��ʼ��
        left=strlen(s);
        chance=7;
        for(int i=0;i<strlen(s2);i++)
        {
            guess(s2[i]); //�µ�һ����ĸ
            if(win || lose) break;
        }
        //���ݽ���������
        if(win) printf("You win.\n");
        else if(lose) printf("You lose.\n");
        else printf("You chickened out.\n");
    }
    return 0;
}
