//UVa 340
#include <stdio.h>
#define maxn 1010

int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,a[maxn],b[maxn];
    int kase=0;
    while(scanf("%d",&n) == 1 && n)
    { //n=0ʱ�������
        printf("Game %d:\n",++kase);
        for(int i=0;i<n;i++)
        { //�����һ������
            scanf("%d",&a[i]);
        }
        while(1)
        {
            int A=0,B=0;//�ֱ�ͳ��λ����ȷ�ͳ��ֹ���λ�ò���
            for(int i=0;i<n;i++)
            {
                scanf("%d",&b[i]);
                if(a[i]==b[i])
                {
                    A++;
                }
            }
            if(b[0]==0)break;//����������0 ֻҪ����ͽ���
            for(int d=1;d<=9;d++)
            {
                int c1=0,c2=0;//�ֱ�ͳ������d�ڴ����кͲ²����и����ֶ��ٴ�
                for(int i=0;i<n;i++)
                {
                    if(a[i]==d) c1++;
                    if(b[i]==d) c2++;
                }
                if(c1<c2) B+=c1; else B+=c2;
            }
            printf("    (%d,%d)\n",A,B-A);//B��Ҫ��ȥλ��Ҳ��ȷ����һ����
        }
    }
    return 0;
}


