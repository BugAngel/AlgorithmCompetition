//UVA1586
#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int n;
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        float atom=0.0;//��ǰԭ�ӵ�ԭ����
        float mass=0.0;//������
        int num=1;//��ǰԭ�Ӹ���
        char s[100];//����ʽ
        int i=0;
        int flag=0;//���Ӹ���λ����0��ʾ��λ����������
        scanf("%s",s);

        while(s[i]!='\0')
        {
            /*�жϵ�ǰԭ��*/
            if(s[i]=='C')
            {
                atom=12.01;
            }
            else if(s[i]=='H')
            {
                atom=1.008;
            }
            else if(s[i]=='O')
            {
                atom=16.00;
            }
            else if(s[i]=='N')
            {
                atom=14.01;
            }

            /*�жϵ�ǰԭ�Ӹ���*/
            while((s[i+1]>='0')&&(s[i+1]<='9'))
            {
                //ASCII��� �ַ������ִ�48
                if(flag==0)
                {
                    num=0;
                }
                else
                {
                    num=num*10;
                }
                num+=(s[i+1]-48);

                i=i+1;//һλ���֣�i��ǰ��һ������
                flag+=1;
            }

//            printf("%c num %d\n",s[i],num);
            flag=0;
            mass+=num*atom;
            i=i+1;//i��ǰ��һ��ԭ��

            /*��λ*/
            num=1;
        }
        printf("%.3f\n",mass);
    }

    return 0;
}
