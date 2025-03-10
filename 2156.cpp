#include <stdio.h>

int n, d[10010][3]={};
int max(int a, int b){
	return a>b?a:b;
}

int main(){
	scanf("%d", &n);
	for(int i=1, t;i<=n;i++){
		scanf("%d", &t);
		d[i][0] = max(d[i-1][0], max(d[i-1][1], d[i-1][2]));
		d[i][1] = d[i-1][0] + t;
		d[i][2] = d[i-1][1] + t;
	}
	printf("%d", max(max(d[n][0], d[n][1]), d[n][2]));
	
	return 0;
}
