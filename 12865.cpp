#include <stdio.h>

int max(int a, int b){
	return a>b?a:b;
}

int n, M, dp[102][10010]={}, m[102], c[102], sm=0;
int main(){
	scanf("%d %d", &n, &M);
	for(int i=1;i<=n;i++){
		scanf("%d", &m[i]);
	}
	for(int i=1;i<=n;i++){
		scanf("%d", &c[i]);
		sm += c[i];
	}
	
	for(int i=1;i<=n;i++){
		for(int j=0;j<=sm;j++){
			if(j - c[i] >= 0){
				dp[i][j] = max(dp[i][j], dp[i-1][j-c[i]]+m[i]);
			}
			dp[i][j] = max(dp[i][j], dp[i-1][j]);
		}
	}
	
	for(int i=0;i<=sm;i++){
		if(dp[n][i] >= M){
			printf("%d", i);
			return 0;
		}
	}
	
	return 0;
}
