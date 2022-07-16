#include <stdio.h>

int n, s, d[21];

int f(int i, int v){
	if(i==n){
		if(v==s) return 1;
		else return 0;
	}
	
	return f(i+1, v)+f(i+1, v+d[i]);
}

int main(){
	scanf("%d %d", &n, &s);
	for(int i=0;i<n;i++) scanf("%d", d+i);
	
	printf("%d", s?f(0, 0):(f(0, 0)-1));
	
	return 0;
}
