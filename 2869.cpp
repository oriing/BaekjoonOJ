#include <stdio.h>
#include <math.h>
int main(){
    int A, B, V;
    double a, b, v;
    int ans;
    scanf("%d %d %d", &A, &B, &V);
    a=A;
    b=B;
    v=V;
    ans=ceil((v-a)/(a-b))+1;
    printf("%d", ans);
    return 0;
}
