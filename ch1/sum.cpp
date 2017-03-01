#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    //乘除的位置不能换，否则程序先执行除法，单数会丢失浮点导致结果出错
    printf("%d\n",n*(n+1)/2);
    return 0;
}
