#include <stdio.h>
#include <stdlib.h>

int main(){
    int y;
    scanf("%d", &y);
    if(y%400==0){
        printf("%d", 1);
    }
    else if(y%100==0){
        printf("%d", 0);
    }
    else if(y%4==0){
        printf("%d", 1);
    } else {
        printf("%d", 0);
    }
    
    return 0;
}
