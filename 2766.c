#include<stdio.h>
int main()
{
    char ar[10][30];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%s",&ar[i]);
        if(i== 2)
        printf("%s\n",ar[2]);
        else if(i==6)
        printf("%s\n",ar[6]);
        else if(i==8)
        printf("%s\n",ar[8]);
    }   
}