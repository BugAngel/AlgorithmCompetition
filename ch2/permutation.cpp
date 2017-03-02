#include<stdio.h>
int main(void)
{
    int i,j,k;
    int temp[3];
    int letter[9];

    /*每个三位数都试试*/
    for(i=1;i<3;i++)
        for(j=1;j<9;j++)
        for(k=1;k<9;k++)
    {
        //字母全部不同标志位
        int flag=0;

        temp[0]=100*i+10*j+k;
        temp[1]=temp[0]*2;
        temp[2]=temp[0]*3;
        /*将三个数字每个字母表示出来*/
        letter[0]=i;
        letter[1]=j;
        letter[2]=k;
        letter[3]=temp[1]/100;
        letter[4]=temp[1]%100/10;
        letter[5]=temp[1]%100%10;
        letter[6]=temp[2]/100;
        letter[7]=temp[2]%100/10;
        letter[8]=temp[2]%100%10;

        /*九个数字不相等且不为零*/
        for(int m=0;m<9;m++)
            for(int n=m+1;n<9;n++)
        {
            if(letter[m]==letter[n])
            {
                flag=1;
                break;
            }
            if((letter[m]==0)||(letter[n]==0))
            {
                flag=1;
                break;
            }
        }
        /*标志位没有被改变，说明这个没问题*/
        if(flag==0)
        {
            printf("%d%d%d %d%d%d %d%d%d\n",letter[0],letter[1],letter[2],letter[3],letter[4]
                   ,letter[5],letter[6],letter[7],letter[8]);
        }
    }
    return 0;
}
