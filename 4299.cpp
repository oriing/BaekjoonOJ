#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i=0;i<=2000;i++){
		if(a-i<0) break;
		if(i-(a-i)==b){
			printf("%d %d", i, a-i);
			return 0;
		}
	}
	printf("-1");
}
