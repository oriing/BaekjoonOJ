#include <stdio.h>

int d[200010], check[200010];
int main(){
	int l, r, n, k, mx=0;
	l = 0; r = 0;
	
	scanf("%d %d", &n, &k);
	for(int i=0;i<n;i++) scanf("%d", d+i);
	while(r<n && l<n){
		check[d[r]]++;
		while(check[d[r]] > k){
			check[d[l]]--;
			l++;
		}
		if(mx < r-l+1) mx=r-l+1;
		r++;
	}
	printf("%d", mx);
	
	return 0;
}
