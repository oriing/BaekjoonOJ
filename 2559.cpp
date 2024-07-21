#include <stdio.h>

int main(){
	int n, k, s=0, t, d[100100], mx=0;
	scanf("%d %d", &n, &k);
	for(int i=0;i<k;i++){
		scanf("%d", d+i);
		s += d[i];
	}
	mx = s;
	
	for(int i=k;i<n;i++){
		scanf("%d", d+i);
		s -= d[i-k];
		s += d[i];
		if(mx < s) mx = s;
	}
	printf("%d", mx);
	
	return 0;
}
