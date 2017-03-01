#include <stdio.h>
int main(void)
{
    int a,b,c;
    float d;
    scanf("%d%d%d",&a,&b,&c);
    //表达式必须含有浮点数，结果才是浮点数
    printf("%.3f\n",(a+b+c)/3.0);
    return 0;
}
