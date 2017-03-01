#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    if(95*n>300)
    {
        printf("%.2f\n",95*n*0.85);
    }
    else
    {
        printf("%.2f\n",95.0*n);
    }
    return 0;
}

