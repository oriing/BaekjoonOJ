#include <stdio.h>
int i, a, b, ans[1000]={0, }, t;

int main(){
    
    scanf("%d", &t);
    for(i=0;i<t;i++){
        scanf("%d %d", &a, &b);
        if(a!=0){
            if(a<=1) ans[i]+=5000000;
            else if(a<=3) ans[i]+=3000000;
            else if(a<=6) ans[i]+=2000000;
            else if(a<=10) ans[i]+=500000;
            else if(a<=15) ans[i]+=300000;
            else if(a<=21) ans[i]+=100000;
        }
        if(b!=0){
            if(b<=1) ans[i]+=5120000;
            else if(b<=3) ans[i]+=2560000;
            else if(b<=7) ans[i]+=1280000;
            else if(b<=15) ans[i]+=640000;
            else if(b<=31) ans[i]+=320000;
        }
    }
    for(i=0;i<t;i++) printf("%d\n", ans[i]);
    
    return 0;
}
