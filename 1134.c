#include<stdio.h>
int main()
{
    int i,num,count1=0,count2=0,count3=0;
    for(i=0;i<10000000;i++)
    {
        scanf("%d",&num);
        if(num==4)
        {
            break;
        }
        else
        {
            if(num==1)
            {
                count1++;
            }
            else if(num==2)
            {
                count2++;
            }
            else if(num==3)
            {
                count3++;
            }
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",count1,count2,count3);
}