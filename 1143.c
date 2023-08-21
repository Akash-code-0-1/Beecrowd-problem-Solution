#include<stdio.h>
int main()
{
    int i,j,num;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        int first=0;
        int second=0;
        int third=0;
        for(j=1;j<=3;j++)
        {
            if(j==1){
            first=i*1;
            }
            else if(j==2){
            second=first*i;
            }
            else
            {
            third=second*i;
            }    
        }
        printf("%d %d %d",first,second,third);
        printf("\n");
    }
}