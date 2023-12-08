#include <stdio.h>

int max(int a, int b){
	return a>b?a:b;
}

int d[1010][20000]={};

int main(){
	int n, k;
	int s[1010], h[1010];
	scanf("%d %d", &n, &k);
	for(int i=1;i<=n;i++) scanf("%d", &s[i]);
	for(int i=1;i<=n;i++) scanf("%d", &h[i]);
	d[0][100]=0;
	int temp = 100+n*k;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=temp;j++){
//			if(j < temp-(n-i)*k) {
//				d[i][j]=-2147483647;
//				continue;
//			}
			if(j >= h[i]) d[i][j] = max(d[i-1][j-k], d[i-1][j-h[i]-k]+s[i]);
			else if(j>k) d[i][j] = d[i-1][j-k];
			else d[i][j]=0;
		}
	}
	
//	int mx=0;
//	for(int i=0;i<18000;i++) if(d[n][i] > mx) mx=d[n][i];
	printf("%d", d[n][100]);
	
	return 0;
}
