#include<stdio.h>
int main()
{
    int i,j,num,min,index;
    scanf("%d",&num);
    int ar[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&ar[i]);
    }
    min=ar[0];
    index=0;
    for(i=0;i<num;i++)
    {
        if(min>ar[i])
        {
        min=ar[i];
        index=i;
        }     
    }
    printf("Menor valor: %d\nPosicao: %d\n",min,index);
}