#include <stdio.h>
#include <math.h>
int main(void)
{
    for(int i=100;i<1000;i++)
    {
            //ע���λ��ʮλ�ķ���
        if(i==(pow((i%100%10),3)+pow((i%100/10),3)+pow((i/100),3)))
           {
               printf("%d\n",i);
           }
    }
    return 0;
}

