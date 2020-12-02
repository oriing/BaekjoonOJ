#include <stdio.h>

int main(){
	int k;
	scanf("%d", &k);
	for(int c=0;c<k;c++){
		int h, w, n;
		scanf("%d %d %d", &h, &w, &n);
		printf("%d%02d\n", (n-1)%h+1, (n-1)/h+1);
	}
	
	return 0;
}
