#include <stdio.h>

int main(){
	int n, x, d, t, mi=-1, kx = -1;
	scanf("%d %d", &n, &x);
	for(int i=0;i<n;i++){
		scanf("%d %d", &d, &t);
		if(d+t<=x){
			if(mi<d) {
				mi = d;
				kx = t;
			}
		}
	}
	printf("%d", mi);
	return 0;
} 
