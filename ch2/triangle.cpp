#include <stdio.h>
int main(void)
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    //m是顶层#个数,n是层数，i是空格数
    int m,n,i=0;
    scanf("%d",&n);
    m=2*n-1;
    while(m>0)
    {
        /*输出左半部分空格*/
        int k=i;
        while(k>0)
        {
            printf(" ");
            k--;
        }
        /*输出#*/
        for(int j=0;j<m;j++)
        {
            printf("#");
        }
        /*输出右半部分空格*/
        k=i;
        while(k>0)
        {
            printf(" ");
            k--;
        }
        /*#每行减少2个，空格每边增加一个*/
        m=m-2;
        i=i+1;
        printf("\n");
    }
    return 0;
}
