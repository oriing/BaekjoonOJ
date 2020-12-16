#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, k=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        int a[7], j;
        a[0]=i%10;
        a[1]=i/10%10;
        a[2]=i/100%10;
        a[3]=i/1000%10;
        a[4]=i/10000%10;
        a[5]=i/100000%10;
        a[6]=i/1000000%10;
        for(j=0;j<6;j++){
            if(a[j]==3||a[j]==6||a[j]==9){
                k++;
            }
        }
    }
    printf("%d", k);
    
    return 0;
}
