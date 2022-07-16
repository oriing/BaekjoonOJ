#include <stdio.h>

int c(int n, int r){
	if(r==0) return 1;
	if(r<0) return 0;
	if(r==n) return 1;
	if(r>n) return 0;
	return c(n-1, r)+c(n-1, r-1);
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", c(a, b));
	return 0;
}
