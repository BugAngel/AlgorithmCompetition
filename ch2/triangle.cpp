#include <stdio.h>
int main(void)
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    //m�Ƕ���#����,n�ǲ�����i�ǿո���
    int m,n,i=0;
    scanf("%d",&n);
    m=2*n-1;
    while(m>0)
    {
        /*�����벿�ֿո�*/
        int k=i;
        while(k>0)
        {
            printf(" ");
            k--;
        }
        /*���#*/
        for(int j=0;j<m;j++)
        {
            printf("#");
        }
        /*����Ұ벿�ֿո�*/
        k=i;
        while(k>0)
        {
            printf(" ");
            k--;
        }
        /*#ÿ�м���2�����ո�ÿ������һ��*/
        m=m-2;
        i=i+1;
        printf("\n");
    }
    return 0;
}
