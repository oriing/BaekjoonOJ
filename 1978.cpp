#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, a[100], i, j, ge, all=0;
    
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    for(i=0;i<n;i++){
        j=2;
        ge=0;
        do {
            if(a[i]%j==0){
                ge++;
                a[i]/=j;
            }
            else {
                j++;
            }
            
if(ge>2){
break;
}
        } while(a[i]>=j);
        if(ge==1){
            all++;
        }
    }
    printf("%d", all);
    
    return 0;
}
