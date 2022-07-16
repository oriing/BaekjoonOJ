#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, a[3], i;
    scanf("%d", &n);
    scanf("%d", a);
    scanf("%d", a+1);
    if(n==2){
        int small = a[0]>a[1]?a[1]:a[0];
        for(i=1;i<=small;i++){
            if(a[0]%i==0&&a[1]%i==0){
                printf("%d\n", i);
            }
        }
    } else {
        scanf("%d", a+2);
        int small = a[0]>a[1]?a[1]:a[0];
        small = a[2]>small?small:a[2];
        for(i=1;i<=small;i++){
            if(a[0]%i==0&&a[1]%i==0&&a[2]%i==0){
                printf("%d\n", i);
            }
        }
    }
    
    return 0;
}
