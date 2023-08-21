#include <stdio.h>
int main(){
    int a,b,c,d,e,i,n;
    int t;

    while(scanf("%d",&n) && n!=0){
           while(n--){
                    t = 0;

                   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

                    if(a <= 127){ t++; a = 1; } else { a = 0; }
                    if(b <= 127){ t++; b = 1; } else { b = 0; }
                    if(c <= 127){ t++; c = 1; } else { c = 0; }
                    if(d <= 127){ t++; d = 1; } else { d = 0; }
                    if(e <= 127){ t++; e = 1; } else { e = 0; }

                    if(t == 1){
                             if(a == 1) printf("A\n");
                             if(b == 1) printf("B\n");
                             if(c == 1) printf("C\n");
                             if(d == 1) printf("D\n");
                             if(e == 1) printf("E\n");
                    }
                    else{
                         printf("*\n");
                    }
            }
    }
    return 0;
}