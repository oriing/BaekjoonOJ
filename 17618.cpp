#include <stdio.h>
#include <stdlib.h>
int sums(int th){
    int alls=0, tens;
    for(tens=1;th/tens!=0;tens*=10){
        alls+=th/tens%10;
    }
    return alls;
}
int main(){
    int n, i, all=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(i%sums(i)==0) all++;
    }
    printf("%d", all);
    return 0;
}
