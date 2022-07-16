#include <stdio.h>
#include <algorithm>
int n, m, d[500010];

int fi(int s, int e, int t){
	int m=(s+e)/2;
	if(s>e) return 0;
	if(d[m]==t) return 1;
	if(d[m]>t) return fi(s, m-1, t);
	return fi(m+1, e, t);
}

int main(){
	scanf("%d", &n);
	for(int i=0;i<n;i++) scanf("%d", d+i);
	std::sort(d, d+n);
	
	scanf("%d", &m);
	for(int i=0;i<m;i++){
		int t;
		scanf("%d", &t);
		printf("%d ", fi(0, n-1, t));
	}
	
	return 0;
}
