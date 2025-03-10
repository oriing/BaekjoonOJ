#include <stdio.h>

int max(int a, int b){
	return a>b?a:b;
}
int main(){
	int mx=0, a, b, c, n;
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		scanf("%d %d %d", &a, &b, &c);
		if(a==b+c) a*=2;
		mx = max(mx, a*(b+c));
	}
	printf("%d", mx);
	return 0;
}
