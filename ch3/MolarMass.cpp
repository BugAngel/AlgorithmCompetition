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
        float atom=0.0;//当前原子的原子量
        float mass=0.0;//分子量
        int num=1;//当前原子个数
        char s[100];//分子式
        int i=0;
        int flag=0;//分子个数位数，0表示个位，依次类推
        scanf("%s",s);

        while(s[i]!='\0')
        {
            /*判断当前原子*/
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

            /*判断当前原子个数*/
            while((s[i+1]>='0')&&(s[i+1]<='9'))
            {
                //ASCII码表 字符比数字大48
                if(flag==0)
                {
                    num=0;
                }
                else
                {
                    num=num*10;
                }
                num+=(s[i+1]-48);

                i=i+1;//一位数字，i向前移一个数字
                flag+=1;
            }

//            printf("%c num %d\n",s[i],num);
            flag=0;
            mass+=num*atom;
            i=i+1;//i向前移一个原子

            /*复位*/
            num=1;
        }
        printf("%.3f\n",mass);
    }

    return 0;
}
