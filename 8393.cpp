#include <stdio.h>

int main(){
    int a, i, al=0;
    scanf("%d", &a);
    for(i=1;i<=a;i++) al+=i;
    printf("%d", al);
    return 0;
}
