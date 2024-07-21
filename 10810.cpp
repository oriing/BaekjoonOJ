#include <stdio.h>

int main(){
	int n, m, d[101]={};
	int x, y, t;
	scanf("%d %d", &n, &m);
	for(int i=0;i<m;i++){
		scanf("%d %d %d", &x, &y, &t);
		for(int i=x;i<=y;i++){
			d[i] = t;
		}
	}
	for(int i=1;i<=n;i++){
		printf("%d ", d[i]);
	}
	
	return 0;
}
