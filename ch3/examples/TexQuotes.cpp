//UVa 272
#include <stdio.h>

int main(void)
{

    int c,q=1;//q=1表示左引号，0表示右引号
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
