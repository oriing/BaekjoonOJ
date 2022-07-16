#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a>b){
		printf("%d", (a-1)+a*(b-1));
	} else {
		printf("%d", (b-1)+b*(a-1));
	}
    return 0;
}
