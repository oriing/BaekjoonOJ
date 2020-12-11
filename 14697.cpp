#include <stdio.h>

int a, b, c;
int n;

int main(void) {
    int i, j, k;
    scanf("%d %d %d %d", &a, &b, &c, &n);
    
    if(n%a==0||n%b==0||n%c==0){
        printf("1");
        return 0;
    }
    for(i=0;i<=n;i+=a){
        for(j=0;j<=n;j+=b){
            for(k=0;k<=n;k+=c){
                if(n==i+j+k){
                    printf("1");
                    return 0;
                }
            }
        }
    }
    
    printf("0");
    
    return 0;
}
