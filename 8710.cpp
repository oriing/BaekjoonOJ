#include <stdio.h>

int main(){
	int k, w, m;
	scanf("%d %d %d", &k, &w, &m);
	
	if(k>=w){
		printf("0");
		return 0;
	}
	
	printf("%d", (w-k-1)/m+1);
	
	return 0;
}
