#include <stdio.h>

int main(){
    int i;
    int n;
    int head = 0;
    int mid = 0;
    int rear = 1;
    scanf("%d" , &n);
     
    for(i = 0 ; i < n ; i++){
        mid = head+rear;
        head = rear;
        rear = mid;
    }
        printf("%d " , head);
    return 0 ;
}
