#include<stdio.h>
 
int main()
{
    int tc,n,sn,i,j,tmp,ck;
    int num[10]={0};
 
            scanf("%d",&tc);
 
            while(tc--){
                scanf("%d %d",&n,&sn);
                ck=0;
                tmp=0;
 
                    for(i=0;i<n;i++){
                        scanf("%d",&tmp);
 
                        if(sn>tmp){
                            num[i] = sn-tmp;
                        }
                        else{
                        num[i] = tmp-sn;
                        }
                    }
 
tmp= num[0];
 
                    for(j=0;j<n;j++){
 
                            if(num[j]==0){
                                ck=j;
                                break;
                            }
                              else if( tmp > num[j] ){
                                    tmp=num[j];
                                    ck=j;
                                }
                    }
 
                   printf("%d\n",ck+1);
 
            } // end while
 
    return 0;
}