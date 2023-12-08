#include <stdio.h>
#include <stdlib.h>

int main(){
    char news[4] = {'N', 'E', 'S', 'W'};
    int d = 0;
    int a;
    for(int i = 0; i<10; i++){
        scanf("%d", &a);
        d += a;
    }
    printf("%c", news[d%4]);
    return 0;
}
