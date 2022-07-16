#include <stdio.h>


int ans=0;
int n, m;
int li[10000];

int main(void) {
    int i, imsi;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &li[i]);
        if(li[i]>ans) ans=li[i];
    }
    scanf("%d", &m);
    imsi=m+1;
    for(;imsi>m;ans--){
        imsi=0;
        for(i=0;i<n;i++){
            imsi+=(li[( i )]>=ans?ans:li[( i )]);
        }
    }
    printf("%d", ans+1);
    
    return 0;
}
