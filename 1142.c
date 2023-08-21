#include<stdio.h>
int main()
{
    int i,j,k,num,first=1;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=1,k=first;j<=4;j++,k++)
        {
            if(j==4)
            {
            printf("PUM");
            }
            else{
            printf("%d ",k);
            }

            first=k+1;
        }
        printf("\n");
    }
}