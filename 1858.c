#include<stdio.h>
int main()
{
    int i,j,num,min,index=1;
    scanf("%d",&num);
    int ar[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&ar[i]);
    }
    min=ar[0];
    for(j=0;j<num;++j)
    {
        if(ar[j]<min)
        {
        min=ar[j];
        index=j+1;
        }     
    }
    printf("%d\n",index);
}