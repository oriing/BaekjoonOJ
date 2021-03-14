#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, k, n;
    scanf("%d", &n);
    for(i=n;i>0;i--){
        for(j=0;j<n-i;j++){
            printf(" ");
        }
        for(j=0;j<i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=2;i<=n;i++){
        for(j=0;j<n-i;j++){
            printf(" ");
        }
        for(j=0;j<i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}
