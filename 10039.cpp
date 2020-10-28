#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, i, sum=0;
    for(i=0;i<5;i++){
        scanf("%d", &a);
        sum+=a>40?a:40;
    }
    printf("%d", sum/5);
    return 0;
}
