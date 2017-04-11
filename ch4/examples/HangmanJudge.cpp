//UVa 489
#include <stdio.h>
#include <string.h>

#define maxn 100
int left,chance;//还需猜left个位置，错chance次之后就会输
char s[maxn],s2[maxn];//答案是字符串s，玩家猜的字母序列是s2
int win,lose;//win=1表示赢了，lose=1表示输了

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
        win=lose=0;//求解最新一组数据之前要初始化
        left=strlen(s);
        chance=7;
        for(int i=0;i<strlen(s2);i++)
        {
            guess(s2[i]); //猜第一个字母
            if(win || lose) break;
        }
        //根据结果进行输出
        if(win) printf("You win.\n");
        else if(lose) printf("You lose.\n");
        else printf("You chickened out.\n");
    }
    return 0;
}
