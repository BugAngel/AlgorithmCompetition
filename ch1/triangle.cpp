#include <stdio.h>
int main(void)
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        //C����û�г˷����ţ����г˷�����
        //^����˼�Ƕ����ư�λ���
        if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    else
    {
        printf("not a triangle");
    }
    return 0;
}
