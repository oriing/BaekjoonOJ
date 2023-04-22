#include <stdio.h>

int main(){
    int a[3], b[3];
    for(int i=0;i<3;i++) scanf("%d", a+i);
    for(int i=0;i<3;i++) scanf("%d", b+i);
    int te=0, k=b[0]-a[0];
    if(a[1]<b[1] || a[1]==b[1] && a[2]<=b[2])
        te++;
    printf("%d %d %d", k+te-1, k+1, k);
}
