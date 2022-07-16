#include <stdio.h>

void gos(){
	int a[15][15]={}, n, k;
	scanf("%d %d", &k, &n);
	
	for(int i=1;i<=n;i++) a[0][i]=i;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			for(int b=1;b<=i;b++){
				a[j][i]+=a[j-1][b];
			}
		}
	}
	printf("%d\n", a[k][n]);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) gos();
	
	return 0;
}
