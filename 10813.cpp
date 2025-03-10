#include <stdio.h>
#include <algorithm>

int main(){
	int d[101];
	for(int i=0;i<=100;i++) d[i]=i;
	int n, m, a, b;
	scanf("%d %d", &n, &m);
	for(int i=0;i<m;i++){
		scanf("%d %d", &a, &b);
		std::swap(d[a], d[b]);
	}
	for(int i=1;i<=n;i++) printf("%d ", d[i]);
	
	return 0;
}
