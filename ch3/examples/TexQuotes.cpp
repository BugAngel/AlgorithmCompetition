//UVa 272
#include <stdio.h>

int main(void)
{

    int c,q=1;//q=1��ʾ�����ţ�0��ʾ������
    while((c= getchar())!=EOF)
    {
        if(c=='"')
        {
            printf("%s",q? "``" : "''");
            q=!q;
        }
        else
        {
            printf("%c",c);
        }
    }
    return 0;
}
